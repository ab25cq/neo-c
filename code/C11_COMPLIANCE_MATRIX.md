# C11 Compliance Matrix (neo-c)

Last updated: 2026-02-18

## Scope
This matrix tracks practical C11 compatibility for `neo-c` based on repository tests.
Status values:

- `PASS`: Covered by tests and currently passing.
- `PARTIAL`: Some coverage exists, but major clauses/edge cases are still missing.
- `GAP`: Not covered yet or known to be incomplete.

## Current Baseline

- Compatibility tests in `code/`:
- `test_c_compat*.nc`: 8 files (`test_c_compat.nc`, `test_c_compat2..7.nc`, `test_c_compat22.nc`)
- `c_test_compat*.nc`: 108 files (`c_test_compat8..108.nc` + diagnostic-negative variants)
- Total C-compat test files: 116
- Latest verification command: `cd code && make test`
- Latest result: pass (including `c_test_compat56..108` and diagnostic negative checks)
- External corpus harness: `cd code && make external-corpus` (manifest-driven, optional)

## Language Clauses (C11)

| Clause/Area | Status | Evidence | Notes |
|---|---|---|---|
| 5.1 Translation phases and execution model | PARTIAL | `c_test_compat76.nc`, `c_test_compat92.nc`, broad compile/run via `code/Makefile` | Includes line-splicing and adjacent-string concatenation coverage, but full phase-by-phase conformance is still not exhaustive. |
| 6.2 Types (arithmetic, qualifiers, pointers, arrays) | PASS | `c_test_compat29..38.nc`, `test_pointer_qualifiers.nc` | Pointer/array/function-pointer depth and qualifiers are well covered. |
| 6.4 Constants and string literals | PASS | `c_test_compat56.nc`, parser updates in `10str.nc` and `08call.nc` | `L/u/U/u8` prefixes now parse; numeric literal suffix handling also improved. |
| 6.5 Expressions and conversions | PASS | `c_test_compat46.nc`, `test_arith.nc` | Integer promotions/conversions and expression behavior tested. |
| 6.6 Constant expressions | PASS | `c_test_compat45.nc`, `test_c_compat*.nc` static assertions | Macro-expanded constant expression paths are covered. |
| 6.7 Declarations/specifiers | PASS | `test_c_compat.nc`, `test_c_compat2.nc`, `c_test_compat48.nc`, `c_test_compat56.nc`, `c_test_compat57.nc`, `c_test_compat60.nc`, `c_test_compat65_negative_array.nc`, `c_test_compat66*.nc` diagnostics | Includes `_Alignas`, `_Alignof`, `_Atomic`, `_Static_assert`, anonymous struct/union, VLA declarators, and declaration diagnostics (invalid declaration size, incomplete type object, duplicate member, file-scope VLA). |
| 6.8 Statements and blocks | PASS | `test_control.nc`, `test_control_flow.nc`, `test_functions.nc`, `c_test_compat65_static_assert_fail.nc` diagnostics | Selection/iteration/jump behavior is broadly exercised; invalid jump context diagnostics are also checked. |
| 6.9 External definitions | PASS | Most `code/*.nc` tests | Multiple translation-unit style constructs and function/variable definitions are exercised. |
| 6.10 Preprocessing directives/macros | PARTIAL | `c_test_compat45.nc`, `c_test_compat59.nc`, `c_test_compat62.nc`, `c_test_compat63.nc`, `c_test_compat64*.nc`, `c_test_compat75.nc`, `c_test_compat76.nc`, `c_test_compat77.nc`, `c_test_compat78.nc`, `c_test_compat79.nc`, `c_test_compat81.nc`, `c_test_compat83.nc`, `c_test_compat85.nc`, `c_test_compat87.nc`, `c_test_compat88.nc`, `c_test_compat89.nc`, `c_test_compat90.nc`, `c_test_compat95.nc`, `c_test_compat98.nc`, `c_test_compat99.nc`, `c_test_compat100.nc`, `c_test_compat101.nc`, `c_test_compat102.nc`, `c_test_compat103.nc`, `c_test_compat104.nc`, `c_test_compat105.nc`, `c_test_compat106.nc`, `c_test_compat107.nc`, `c_test_compat108.nc` | Macro features, `_Pragma`, `#line`, predefined macro behavior (`__STDC__`, `__FILE__`, `__LINE__`), `defined`, `#undef`, rescan, include search order, `#include_next`, `__has_include_next`, line-splicing/comment tokenization edges, deep rescan chains, tight-token `#if` expression boundaries, digraph/alternative-token directives (`%:`/`%:%:`), variadic macro argument handling, nested-argument comma parsing, inactive-branch skipping (missing `#include`/`#error`/invalid tokens), `#undef`+redefinition semantics, `#line` diagnostics (invalid/missing/non-string/negative arguments), condition-group diagnostics (`#elif` without `#if`, `#endif` without `#if`, `#elif` after `#else`, duplicate `#else`, unterminated conditional block), malformed `#if` expression diagnostics (missing operand, malformed `defined()`, malformed ternary, invalid `defined` operand, trailing tokens), `defined` operand semantics, `#if` integer-expression precedence/bitwise/ternary/radix evaluation, and multi-line block-comment handling on `#if`/inactive-branch paths are tested; full conformance set is still missing. |

## C11-Specific Core Features

| Feature | Status | Evidence | Notes |
|---|---|---|---|
| `_Atomic` types and operations | PASS | `c_test_compat11.nc`, `c_test_compat12.nc`, `c_test_compat26..28.nc`, `c_test_compat58.nc`, `test_c_compat7.nc` | Includes flag/CAS/fence and explicit memory-order APIs. |
| `_Thread_local` | PASS | `c_test_compat48.nc` | Single-thread semantics are covered. |
| `_Static_assert` | PASS | `test_c_compat*.nc`, `c_test_compat59.nc` | Includes block-scope assertion test. |
| `_Generic` | PASS | `test_c_compat.nc`, `codex.nc` | Type-generic selection macros are tested. |
| `_Noreturn` / `<stdnoreturn.h>` | PASS | `c_test_compat48.nc`, `c_test_compat56.nc` | Declaration-level compatibility covered. |
| `<uchar.h>` (`char16_t`, `char32_t`) | PASS | `c_test_compat56.nc` | `u/U` literals and type size checks pass. |
| C11 threads API (`<threads.h>`) | PARTIAL | `c_test_compat61.nc`, `c_test_compat67.nc`, `c_test_compat68.nc`, `c_test_compat69.nc`, `c_test_compat70.nc`, `c_test_compat71.nc`, `c_test_compat72.nc`, `c_test_compat73.nc`, `c_test_compat74.nc`, `c_test_compat80.nc`, `c_test_compat82.nc`, `c_test_compat84.nc`, `c_test_compat86.nc`, `c_test_compat91.nc` | Core primitives plus timeout/interruption behavior (`thrd_sleep`, `mtx_timedlock`, `cnd_timedwait`), thread-control APIs (`thrd_current`, `thrd_equal`, `thrd_yield`, `thrd_detach`, `thrd_exit`), contention paths (`mtx_trylock`, `call_once`, `cnd_signal`, `cnd_broadcast`), recursive mutex behavior, TSS destructor callbacks, single/multi-key TLS isolation/default-null behavior, multi-flag `call_once` contention/independence, no-waiter `cnd_signal`/`cnd_broadcast`, past-deadline `cnd_timedwait`, and best-effort `thrd_create` failure-code observation (`thrd_nomem`/`thrd_error`) are covered; wider portability/scheduling scenarios are still not exhaustive. |

## Standard Library Coverage (C11)

| Header/Area | Status | Evidence | Notes |
|---|---|---|---|
| `<stdio.h>` | PASS | many tests, e.g. `c_test_compat54.nc` | file I/O and formatting basics covered. |
| `<assert.h>` | PASS | `c_test_compat93.nc`, `test_c_compat*.nc` | `assert` behavior (including `NDEBUG` path) is covered. |
| `<stdlib.h>` / search/sort/convert | PASS | `c_test_compat43.nc`, `test_c_compat6.nc`, `c_test_compat49.nc` | `qsort`, `bsearch`, `strto*` families covered. |
| `<string.h>` | PASS | `test_c_compat*.nc`, `c_test_compat54.nc` | copy/compare/memory ops exercised. |
| `<stdarg.h>` | PASS | `c_test_compat44.nc` | variadic function path covered. |
| `<stdint.h>` / `<inttypes.h>` | PASS | `test_c_compat*.nc`, `c_test_compat50.nc` | fixed-width integer and format macros tested. |
| `<iso646.h>` | PASS | `c_test_compat94.nc` | alternative operator macros (`and`, `or`, `not`, `bitand`, etc.) are tested. |
| `<float.h>` | PASS | `test_c_compat6.nc`, `c_test_compat96.nc` | floating-point characteristic macros (`FLT_RADIX`, `*_MAX`, `*_MIN`, `*_EPSILON`) are tested. |
| `<signal.h>` | PASS | `c_test_compat9.nc`, `c_test_compat69.nc`, `c_test_compat97.nc` | handler registration, `raise`, and signal-interruption interaction paths are tested. |
| `<math.h>` | PASS | `test_c_compat5.nc`, `c_test_compat53.nc`, `c_test_compat55.nc` | scalar math and complex support tested. |
| `<complex.h>` | PASS | `c_test_compat55.nc` | parser/runtime path verified for complex literals and ops. |
| `<fenv.h>` | PASS | `test_c_compat7.nc`, `c_test_compat53.nc` | rounding/exceptions exercised. |
| `<stdatomic.h>` | PASS | `c_test_compat11/12/26/27/28/58.nc` | broad atomic API coverage in repo tests. |
| `<locale.h>` | PASS | `c_test_compat51.nc` | locale-dependent collation/transform basic checks. |
| `<wchar.h>` / `<wctype.h>` | PASS | `c_test_compat52.nc` | wide-character baseline tested. |
| `<setjmp.h>` | PASS | `c_test_compat42.nc`, `test_c_compat5.nc` | setjmp/longjmp behavior covered. |
| `<threads.h>` | PARTIAL | `c_test_compat61.nc`, `c_test_compat67.nc`, `c_test_compat68.nc`, `c_test_compat69.nc`, `c_test_compat70.nc`, `c_test_compat71.nc`, `c_test_compat72.nc`, `c_test_compat73.nc`, `c_test_compat74.nc`, `c_test_compat80.nc`, `c_test_compat82.nc`, `c_test_compat84.nc`, `c_test_compat86.nc`, `c_test_compat91.nc` | Basic, timeout/interruption, thread-control, contention, stress-repetition, recursive-mutex, TSS-destructor, single/multi-key TLS isolation/default-null, multi-flag `call_once` contention/independence, no-waiter `cnd_signal`/`cnd_broadcast`, past-deadline timedwait, create-failure-code observation, and `thrd_exit`/`cnd_signal` sequencing coverage exists; broader behavioral conformance still needs expansion. |

## Known Gaps / Risks

| Item | Status | Detail |
|---|---|---|
| Full preprocessor conformance | PARTIAL | Need dedicated coverage for less-common directives/edge lexing cases. |
| Full library breadth | PARTIAL | C11 library is larger than currently tested headers and function sets. |
| Formal conformance suites | PARTIAL | External corpus runner is integrated (`code/tools/run_external_corpus.sh`), but corpus checkout/curation and CI execution policy are still pending. |
| C11 memory model edge cases | PARTIAL | Atomics are broadly tested, but not exhaustively across all ordering interleavings. |

## Next Actions (Recommended)

1. Extend preprocessor conformance with additional edge cases (line-marker diagnostics, recursive expansion limits, unusual tokenization).
2. Expand negative/diagnostic tests for required C11 constraint violations (declarations, type compatibility, initializer constraints).
3. Extend `<threads.h>` portability coverage (platform-specific return codes, scheduling fairness, and stress scenarios).
4. Add curated corpus manifests and enable `RUN_EXTERNAL_CORPUS=1` in CI to continuously map failures back to this matrix.
