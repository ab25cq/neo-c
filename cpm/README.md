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
