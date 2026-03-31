# webweb

`webweb` is a practical web server example written in neo-c.
It is not just a toy HTTP sample. It behaves like a small general-purpose web server:

- serves static files such as `.html`, `.css`, `.js`, `.jpg`, `.png`, and `.gif`
- routes `/` to `index.html`
- executes `.cgi` programs for dynamic pages
- supports both HTTP and HTTPS
- includes a small database server example in `dbdb/`

`webweb`はneo-cで書かれた実用寄りのWebサーバー例です。
単なるHTTPサンプルではなく、小さな汎用Webサーバーのように動きます。

- `.html`, `.css`, `.js`, `.jpg`, `.png`, `.gif` などの静的ファイルを配信します
- `/` は `index.html` にルーティングされます
- `.cgi` を動的ページとして実行できます
- HTTP と HTTPS の両方に対応しています
- `dbdb/` に小さなDBサーバー例も入っています

## Features

- Static file serving
- CGI execution for GET and POST
- Content-Type switching by extension
- Basic path traversal check for `..`
- HTTPS mode using OpenSSL
- `dbdb` integration for sample application logic

## Directory layout

```text
webweb/
  main.nc          main web server
  index.html       top page
  sub_page*.html   sample static pages
  images/          sample static assets
  cgi-bin/         CGI programs
  dbdb/            sample database server and client
  cert.pem         HTTPS certificate
  key.pem          HTTPS private key
```

## Build

Build the server and CGI programs:

```sh
make
```

This creates `webweb2` and also builds the CGI binaries under `cgi-bin/`.

`webweb2` が作られ、`cgi-bin/` のCGIもビルドされます。

## Quick start

If you want to try `webweb` like a normal local web server, this is the shortest path:

```sh
make
./webweb2 -http
```

Then open:

- `http://127.0.0.1:8080/`
- `http://127.0.0.1:8080/sub_page.html`
- `http://127.0.0.1:8080/cgi-bin/main.cgi`

一般的なローカルWebサーバーのようにすぐ試すなら、まずこれで十分です。

```sh
make
./webweb2 -http
```

そのあと以下を開けば確認できます。

- `http://127.0.0.1:8080/`
- `http://127.0.0.1:8080/sub_page.html`
- `http://127.0.0.1:8080/cgi-bin/main.cgi`

## Run

### HTTP mode

Run the plain HTTP server on port `8080`:

```sh
make run
```

or:

```sh
./webweb2 -http
```

In HTTP mode, `webweb` serves static files and CGI on port `8080`.

### HTTPS mode

Run the HTTPS server using `cert.pem` and `key.pem`:

```sh
./webweb2
```

By default, HTTPS mode listens on port `443`.

デフォルトではHTTPSモードで `443` 番ポートを使います。

If you want to regenerate the self-signed certificate:

```sh
sh make_key.sh
```

This uses `openssl.cnf` and writes `cert.pem` and `key.pem`.

`openssl.cnf` を使って `cert.pem` と `key.pem` を作り直します。

## Quick checks with curl

You can verify it like a normal web server from the terminal:

```sh
curl -i http://127.0.0.1:8080/
curl -i http://127.0.0.1:8080/sub_page2.html
curl -i "http://127.0.0.1:8080/cgi-bin/select2.cgi?fruit=banana"
curl -i -X POST http://127.0.0.1:8080/cgi-bin/login.cgi
```

For HTTPS:

```sh
curl -k -i https://127.0.0.1/
```

`-k` is useful because the bundled certificate is self-signed.

同梱証明書は自己署名なので、HTTPS確認では `-k` を付けるのが楽です。

## How requests are handled

`webweb` behaves in a familiar web-server style:

- `GET /` -> `index.html`
- `GET /foo.html` -> static file
- `GET /cgi-bin/main.cgi?...` -> CGI execution
- `POST /cgi-bin/login.cgi` -> CGI execution with POST body

Files ending in `.cgi` are executed.
Other files are treated as static content.

`.cgi` で終わるファイルは実行され、それ以外は静的ファイルとして配信されます。

## Static files

Supported content types in the current implementation:

- `jpg`, `jpeg` -> `image/jpeg`
- `png` -> `image/png`
- `gif` -> `image/gif`
- `css` -> `text/css; charset=UTF-8`
- `js` -> `application/javascript; charset=UTF-8`
- `txt` -> `text/plain; charset=UTF-8`
- other -> `text/html; charset=UTF-8`

Images are sent as binary data with `Content-Length`.
Text and HTML files are read into memory and returned as strings.

## CGI

CGI programs live under `cgi-bin/`.
Examples:

- `login.cgi`
- `main.cgi`
- `food.cgi`
- `select.cgi`
- `select2.cgi`
- `walking.cgi`
- `ball.cgi`
- `pet.cgi`

The server passes request information such as query string, content length, and cookies into the CGI environment.

クエリ文字列、content length、cookie などの情報は CGI の環境変数に渡されます。

## Database example

`dbdb/` is a small sample database server used by the web sample.

Build and run it:

```sh
(cd dbdb && make run)
```

There is also a sample client in `dbdb/client/`.

```sh
(cd dbdb/client && make run)
```

If you want to start everything together for the sample app:

```sh
sh all_build.sh
```

This starts `dbdb`, builds `webweb`, and runs HTTP mode.

`dbdb` 起動、`webweb` ビルド、HTTPモード実行までまとめて行います。

## Why use webweb as a reference

If you want to build a general web server in neo-c, `webweb` is a good starting point because it already shows:

- socket handling with `begin()`, `next()`, and `end()` loops from `neo-c-net.h`
- request parsing for GET and POST
- static file serving
- CGI execution model
- HTTPS handling with OpenSSL
- multi-component project structure

neo-c で一般的なWebサーバーを書きたいとき、`webweb` はかなり良い出発点です。
`neo-c-net.h` の `begin()`, `next()`, `end()` ループを使った socket 処理、GET/POST 解析、静的配信、CGI 実行、OpenSSL による HTTPS、複数コンポーネント構成が一通り入っています。

## Related files

- `main.nc`: main HTTP/HTTPS server
- `cgi-bin/*.nc`: dynamic CGI handlers
- `dbdb/main.nc`: database server example
- `dbdb/client/main.nc`: test client

## Notes

- `make run` starts HTTP mode.
- HTTPS mode requires `cert.pem` and `key.pem`.
- The server includes only simple routing and checks, so this is a compact reference implementation rather than a hardened production server.
- `clean_build.sh` removes build outputs from `webweb`, `cgi-bin`, and `dbdb`.

`webweb` は「一般的なWebサーバーの作り方をneo-cで示す実例」として使うのが一番分かりやすいです。
