# cpm

`cpm` is a small Cargo-like package manager for neo-c projects.

```sh
cpm new hello
cd hello
cpm build
cpm run
cpm test
cpm val
cpm leak
cpm clean
```

`cpm new hello` creates:

```text
hello/
  Neo.toml
  lib/neo-c.h
  lib/neo-c-str.nc
  lib/neo-c-str.h
  lib/neo-c-libc.h
  lib/neo-c-net.h
  lib/neo-c-pthread.h
  src/main.nc
  .gitignore
```

The manifest format is intentionally small:

```toml
[package]
name = "hello"
version = "1.0.0"

[build]
src = "src/main.nc"
out = "target/debug/hello"
neoc = "neo-c"
neoc_flags = "-I. -Ilib"
ldflags = ""
strip = true
```

`cpm build` compiles every `.nc` file under `src` to an object file under
`target/debug`, then links them into `target/debug/<package-name>`.

The neo-c standard library source files are copied into each project under
`lib/`. `cpm build` compiles `lib/neo-c-str.nc` into
`target/debug/neo-c-str.o` and links that project-local object.

Set `CPM_NEOC=/path/to/neo-c` to override the compiler at runtime. Set
`CPM_STDLIB_DIR=/path/to/neo-c` if `cpm new` cannot find the standard library
sources. `cpm val` uses Valgrind. `cpm leak` builds with sanitizer flags and
falls back to Valgrind if the sanitizer path fails.

For libc-free tiny Linux binaries, `Neo.toml` can select a bare build path:

```toml
[build]
src = "src/main.nc"
out = "target/debug/small"
neoc = "neo-c"
neoc_flags = ""
bare = true
cc = "clang"
cflags = "-target x86_64-linux-gnu -Oz -ffreestanding -fno-asynchronous-unwind-tables -fno-ident -fno-stack-protector -fno-unwind-tables -nostdlib"
linker = "ld"
linker_flags = "-nostdlib -static -n --build-id=none"
linker_script = "small.ld"
ldflags = ""
strip = true
strip_sections = true
```

With `bare = true`, `cpm build` runs `neo-c -bare -S`, compiles the generated C
with `cc`/`cflags`, links with `linker`, and uses `strip --strip-section-headers`
when `strip_sections = true`.
