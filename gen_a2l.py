#!/usr/bin/env python3
# gen_a2l.py (PC list aware)
#
# Usage:
#   python3 gen_a2l.py your.elf --prefix neo_a2l
#   python3 gen_a2l.py your.elf --prefix neo_a2l --pcs pcs.txt
#   python3 gen_a2l.py your.elf --prefix neo_a2l --addr2line llvm-addr2line --nm llvm-nm --pcs pcs.txt
#
# pcs.txt:
#   0x401234
#   4012ff
#   # comment

from __future__ import annotations
import argparse
import os
import re
import shutil
import subprocess
import sys
from dataclasses import dataclass
from typing import Dict, List, Optional, Set, Tuple


@dataclass(frozen=True)
class FuncEntry:
    addr: int
    name_idx: int


@dataclass(frozen=True)
class LineEntry:
    addr: int
    file_idx: int
    line: int


def which_or_none(cmd: str) -> Optional[str]:
    return shutil.which(cmd)


def run(cmd: List[str]) -> str:
    try:
        p = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, check=False)
    except FileNotFoundError:
        raise RuntimeError(f"command not found: {cmd[0]}")
    if p.returncode != 0 and p.stdout == "":
        raise RuntimeError(f"command failed ({p.returncode}): {' '.join(cmd)}\n{p.stderr.strip()}")
    return p.stdout


def pick_default_tools() -> Tuple[str, str]:
    addr2line = which_or_none("llvm-addr2line") or which_or_none("addr2line")
    nm = which_or_none("llvm-nm") or which_or_none("nm")
    if not addr2line:
        raise RuntimeError("Could not find llvm-addr2line or addr2line in PATH. Use --addr2line.")
    if not nm:
        raise RuntimeError("Could not find llvm-nm or nm in PATH. Use --nm.")
    return addr2line, nm


def intern_string(tab: Dict[str, int], arr: List[str], s: str) -> int:
    i = tab.get(s)
    if i is not None:
        return i
    i = len(arr)
    tab[s] = i
    arr.append(s)
    return i


HEX_RE = re.compile(r"^(?:0x)?[0-9a-fA-F]+$")


def parse_nm_sorted(nm_cmd: str, binary: str,
                    funcnames_tab: Dict[str, int], funcnames: List[str]) -> List[FuncEntry]:
    out = run([nm_cmd, "-n", binary])
    funcs: List[FuncEntry] = []
    for line in out.splitlines():
        line = line.strip()
        if not line:
            continue
        parts = line.split()
        if len(parts) < 3:
            continue
        addr_s, typ, name = parts[0], parts[1], parts[2]
        if not HEX_RE.match(addr_s):
            continue
        t = typ[0]
        if t not in ("T", "t", "W", "w", "i", "I"):
            continue
        if name in (".text",):
            continue
        addr = int(addr_s, 16)
        ni = intern_string(funcnames_tab, funcnames, name)
        funcs.append(FuncEntry(addr=addr, name_idx=ni))

    if not funcs:
        raise RuntimeError("No function symbols parsed from nm output. Is the binary stripped? Is nm correct?")

    funcs.sort(key=lambda x: x.addr)
    dedup: List[FuncEntry] = []
    last_addr = None
    for f in funcs:
        if last_addr is None or f.addr != last_addr:
            dedup.append(f)
            last_addr = f.addr
    return dedup


def parse_addr2line_output(text: str) -> List[Tuple[int, str, str]]:
    lines = [ln.rstrip("\r") for ln in text.splitlines() if ln.strip() != ""]
    res: List[Tuple[int, str, str]] = []
    i = 0
    while i + 2 < len(lines):
        l0 = lines[i].strip()
        l1 = lines[i + 1].strip()
        l2 = lines[i + 2].strip()
        m = re.search(r"(0x[0-9a-fA-F]+)", l0)
        if not m:
            i += 1
            continue
        addr = int(m.group(1), 16)
        res.append((addr, l1, l2))
        i += 3
    return res


def symbolize_addrs(addr2line_cmd: str, binary: str, addrs: List[int], batch: int = 256) -> List[Tuple[int, str, str]]:
    out_all: List[Tuple[int, str, str]] = []
    for i in range(0, len(addrs), batch):
        chunk = addrs[i:i+batch]
        cmd = [addr2line_cmd, "-e", binary, "-f", "-a"]
        cmd += [f"0x{a:x}" for a in chunk]
        text = run(cmd)
        out_all.extend(parse_addr2line_output(text))
    return out_all


def split_file_line(fileline: str) -> Tuple[str, int]:
    s = re.sub(r"\s+\(.*\)$", "", fileline.strip())
    idx = s.rfind(":")
    if idx == -1:
        return "<unknown>", 0
    file = s[:idx] if s[:idx] else "<unknown>"
    try:
        line = int(s[idx+1:])
    except ValueError:
        line = 0
    if file == "??":
        file = "<unknown>"
    return file, line


def read_pcs_file(path: str) -> List[int]:
    pcs: List[int] = []
    with open(path, "r", encoding="utf-8") as f:
        for raw in f:
            s = raw.strip()
            if not s or s.startswith("#"):
                continue
            if not HEX_RE.match(s):
                raise RuntimeError(f"bad pc in pcs file: {s}")
            pcs.append(int(s, 16))
    return pcs


def generate_c_h(prefix: str,
                 files: List[str],
                 funcnames: List[str],
                 funcs: List[FuncEntry],
                 lines: List[LineEntry]) -> None:
    h_path = prefix + ".h"
    c_path = prefix + ".c"
    guard = re.sub(r"[^A-Za-z0-9]", "_", (prefix + "_H").upper())

    def c_escape(s: str) -> str:
        return s.replace("\\", "\\\\").replace('"', '\\"')

    with open(h_path, "w", encoding="utf-8") as h:
        h.write(f"""// Auto-generated by gen_a2l.py
#ifndef {guard}
#define {guard}

#include <stdint.h>

typedef struct {{ uint64_t addr; uint32_t file_idx; uint32_t line; }} neo_a2l_line_t;
typedef struct {{ uint64_t addr; uint32_t name_idx; }} neo_a2l_func_t;

extern const char *const neo_a2l_files[];
extern const uint32_t neo_a2l_files_count;
extern const neo_a2l_line_t neo_a2l_lines[];
extern const uint32_t neo_a2l_lines_count;

extern const char *const neo_a2l_funcnames[];
extern const uint32_t neo_a2l_funcnames_count;
extern const neo_a2l_func_t neo_a2l_funcs[];
extern const uint32_t neo_a2l_funcs_count;

int neo_a2l_lookup_line(uint64_t pc, const char **file, uint32_t *line);
int neo_a2l_lookup_func(uint64_t pc, const char **func);
int neo_a2l_lookup(uint64_t pc, const char **func, const char **file, uint32_t *line);

#endif
""")

    with open(c_path, "w", encoding="utf-8") as c:
        c.write(f"""// Auto-generated by gen_a2l.py
#include "{os.path.basename(h_path)}"

const char *const neo_a2l_files[] = {{
""")
        for f in files:
            c.write(f'  "{c_escape(f)}",\n')
        c.write("};\n")
        c.write(f"const uint32_t neo_a2l_files_count = {len(files)}u;\n\n")

        c.write("const neo_a2l_line_t neo_a2l_lines[] = {\n")
        for e in lines:
            c.write(f"  {{ 0x{e.addr:016x}ULL, {e.file_idx}u, {e.line}u }},\n")
        c.write("};\n")
        c.write(f"const uint32_t neo_a2l_lines_count = {len(lines)}u;\n\n")

        c.write("const char *const neo_a2l_funcnames[] = {\n")
        for n in funcnames:
            c.write(f'  "{c_escape(n)}",\n')
        c.write("};\n")
        c.write(f"const uint32_t neo_a2l_funcnames_count = {len(funcnames)}u;\n\n")

        c.write("const neo_a2l_func_t neo_a2l_funcs[] = {\n")
        for f in funcs:
            c.write(f"  {{ 0x{f.addr:016x}ULL, {f.name_idx}u }},\n")
        c.write("};\n")
        c.write(f"const uint32_t neo_a2l_funcs_count = {len(funcs)}u;\n\n")

        c.write(r"""
static int binsearch_line(uint64_t pc) {
  int lo = 0;
  int hi = (int)neo_a2l_lines_count - 1;
  int ans = -1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    uint64_t a = neo_a2l_lines[mid].addr;
    if (a <= pc) { ans = mid; lo = mid + 1; }
    else { hi = mid - 1; }
  }
  return ans;
}

int neo_a2l_lookup_line(uint64_t pc, const char **file, uint32_t *line) {
  if (!file || !line || neo_a2l_lines_count == 0) return 0;
  int i = binsearch_line(pc);
  if (i < 0) return 0;
  uint32_t fi = neo_a2l_lines[i].file_idx;
  if (fi >= neo_a2l_files_count) return 0;
  *file = neo_a2l_files[fi];
  *line = neo_a2l_lines[i].line;
  return 1;
}

static int binsearch_func(uint64_t pc) {
  int lo = 0;
  int hi = (int)neo_a2l_funcs_count - 1;
  int ans = -1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    uint64_t a = neo_a2l_funcs[mid].addr;
    if (a <= pc) { ans = mid; lo = mid + 1; }
    else { hi = mid - 1; }
  }
  return ans;
}

int neo_a2l_lookup_func(uint64_t pc, const char **func) {
  if (!func || neo_a2l_funcs_count == 0) return 0;
  int i = binsearch_func(pc);
  if (i < 0) return 0;
  uint32_t ni = neo_a2l_funcs[i].name_idx;
  if (ni >= neo_a2l_funcnames_count) return 0;
  *func = neo_a2l_funcnames[ni];
  return 1;
}

int neo_a2l_lookup(uint64_t pc, const char **func, const char **file, uint32_t *line) {
  int okf = func ? neo_a2l_lookup_func(pc, func) : 0;
  int okl = (file && line) ? neo_a2l_lookup_line(pc, file, line) : 0;
  return okf || okl;
}
""")

    print(f"Wrote: {h_path}")
    print(f"Wrote: {c_path}")
    print(f"funcs={len(funcs)} funcnames={len(funcnames)} files={len(files)} lines={len(lines)}")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("binary", help="Input binary (ELF recommended).")
    ap.add_argument("--prefix", default="neo_a2l", help="Output prefix (default: neo_a2l)")
    ap.add_argument("--addr2line", default=None, help="addr2line command (e.g. llvm-addr2line or riscv64-unknown-elf-addr2line)")
    ap.add_argument("--nm", default=None, help="nm command (e.g. llvm-nm or riscv64-unknown-elf-nm)")
    ap.add_argument("--pcs", default=None, help="Optional PC list file (hex addresses, one per line).")
    ap.add_argument("--batch", type=int, default=256, help="Addresses per addr2line invocation (default: 256)")
    args = ap.parse_args()

    addr2line_cmd, nm_cmd = (args.addr2line, args.nm)
    if not addr2line_cmd or not nm_cmd:
        d_a2l, d_nm = pick_default_tools()
        addr2line_cmd = addr2line_cmd or d_a2l
        nm_cmd = nm_cmd or d_nm

    # 1) functions from nm
    funcnames_tab: Dict[str, int] = {}
    funcnames: List[str] = []
    funcs = parse_nm_sorted(nm_cmd, args.binary, funcnames_tab, funcnames)
    func_addrs = [f.addr for f in funcs]

    # 2) optional PCs (from neo_frame dump)
    pcs: List[int] = []
    if args.pcs:
        pcs = read_pcs_file(args.pcs)

    # 3) symbolize BOTH function starts and pcs (more accurate)
    addr_set: Set[int] = set(func_addrs)
    addr_set.update(pcs)
    all_addrs = sorted(addr_set)

    a2l_rows = symbolize_addrs(addr2line_cmd, args.binary, all_addrs, batch=args.batch)

    # 4) build file table + line table
    files_tab: Dict[str, int] = {}
    files: List[str] = []
    line_map: Dict[int, LineEntry] = {}

    for (addr, _func, fileline) in a2l_rows:
        file, line = split_file_line(fileline)
        fi = intern_string(files_tab, files, file)
        if addr not in line_map:
            line_map[addr] = LineEntry(addr=addr, file_idx=fi, line=line)

    # line entries sorted by addr, then compact consecutive identical (file,line)
    lines = [line_map[a] for a in sorted(line_map.keys())]
    compact: List[LineEntry] = []
    prev: Optional[LineEntry] = None
    for e in lines:
        if prev and (e.file_idx == prev.file_idx and e.line == prev.line):
            continue
        compact.append(e)
        prev = e
    lines = compact

    generate_c_h(args.prefix, files, funcnames, funcs, lines)


if __name__ == "__main__":
    try:
        main()
    except RuntimeError as e:
        print("error:", e, file=sys.stderr)
        sys.exit(1)

