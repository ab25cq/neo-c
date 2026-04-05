# webweb

`webweb` is a practical web server example written in neo-c.
It is not just a toy HTTP sample. It behaves like a small general-purpose web server:

- serves static files such as `.html`, `.css`, `.js`, `.jpg`, `.png`, and `.gif`
- routes `/` to a directory index such as `index.html` or `index.htm`
- executes `.cgi` programs for dynamic pages
- supports HTTP/1.1 keep-alive
- accepts both `Content-Length` and chunked request bodies
- supports `HEAD` for static files
- supports conditional static responses with `ETag` / `Last-Modified`
- supports single-range static responses with `Range: bytes=...`
- compresses text responses with gzip when the client accepts it
- switches document roots by `Host` header using `vhosts/<host>/`
- handles multiple clients in parallel with forked workers
- supports both HTTP and HTTPS
- includes a small database server example in `dbdb/`

`webweb`はneo-cで書かれた実用寄りのWebサーバー例です。
単なるHTTPサンプルではなく、小さな汎用Webサーバーのように動きます。

- `.html`, `.css`, `.js`, `.jpg`, `.png`, `.gif` などの静的ファイルを配信します
- `/` は `index.html` や `index.htm` などのディレクトリインデックスにルーティングされます
- `.cgi` を動的ページとして実行できます
- HTTP/1.1 の keep-alive に対応しています
- `Content-Length` と chunked のリクエストボディを扱えます
- クライアントが受け付ければテキストレスポンスを gzip 圧縮します
- `Host` ヘッダに応じて `vhosts/<host>/` に切り替えられます
- fork ベースで複数クライアントを並列処理します
- HTTP と HTTPS の両方に対応しています
- `dbdb/` に小さなDBサーバー例も入っています

## Features

- Static file serving
- CGI execution for GET and POST
- HTTP/1.1 keep-alive connections
- Keep-Alive response headers for persistent connections
- `Expect: 100-continue` for staged request bodies
- Chunked request body parsing
- Case-insensitive request header handling
- `HEAD` for static content
- `HEAD` for CGI responses
- `OPTIONS *` and resource-specific `OPTIONS`
- Core CGI environment variables including `REQUEST_URI`, `SCRIPT_NAME`, `PATH_INFO`, and forwarded `HTTP_*` headers
- Directory index resolution for `index.html` and `index.htm`
- Directory slash redirects for index-based directories
- `ETag`, `Last-Modified`, `If-None-Match`, and `If-Modified-Since`
- Single `Range: bytes=...` requests with `206` / `416`
- Gzip compression for text responses
- Host-based virtual document roots
- Fork-based parallel connection handling
- Broader Content-Type switching by extension with octet-stream fallback
- Request timeout and payload size checks
- Path normalization and percent-decoding checks
- Explicit 400/403/404/405/408/413/500 responses
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
  vhosts/          optional host-based document roots
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
curl -I http://127.0.0.1:8080/
curl -i http://127.0.0.1:8080/sub_page2.html
curl -i "http://127.0.0.1:8080/cgi-bin/select2.cgi?fruit=banana"
curl -i -X POST http://127.0.0.1:8080/cgi-bin/login.cgi
curl -i -H 'If-Modified-Since: Fri, 31 Dec 2099 23:59:59 GMT' http://127.0.0.1:8080/index.html
curl -i -H 'Range: bytes=0-31' http://127.0.0.1:8080/index.html
curl -i -H 'Accept-Encoding: gzip' http://127.0.0.1:8080/
curl -i -H 'Host: example.test' http://127.0.0.1:8080/
curl -i -X POST -d 'x=1' http://127.0.0.1:8080/index.html
curl --path-as-is -i http://127.0.0.1:8080/%2e%2e/README.md
```

For HTTPS:

```sh
curl -k -i https://127.0.0.1/
```

`-k` is useful because the bundled certificate is self-signed.

同梱証明書は自己署名なので、HTTPS確認では `-k` を付けるのが楽です。

## How requests are handled

`webweb` behaves in a familiar web-server style:

- `GET /` -> the first matching directory index such as `index.html` or `index.htm`
- `HEAD /index.html` -> headers only for the same static resource
- `GET /foo.html` -> static file
- `GET /cgi-bin/main.cgi?...` -> CGI execution
- `POST /cgi-bin/login.cgi` -> CGI execution with POST body
- `POST /index.html` -> `405 Method Not Allowed`
- invalid encoded traversal path -> `400 Bad Request`

Files ending in `.cgi` are executed.
Other files are treated as static content.

`.cgi` で終わるファイルは実行され、それ以外は静的ファイルとして配信されます。

HTTP/1.1 connections are kept alive by default unless the request says `Connection: close` or the response path needs the server to close the socket.

デフォルトでは HTTP/1.1 の接続は keep-alive で維持されます。リクエストが `Connection: close` を要求した場合や、レスポンス都合で接続維持が安全でない場合は close されます。

Static files now include `Date`, `Server`, `ETag`, `Last-Modified`, and `Accept-Ranges` headers.

静的ファイルのレスポンスには `Date`, `Server`, `ETag`, `Last-Modified`, `Accept-Ranges` が付きます。

If the client sends `Accept-Encoding: gzip`, text responses are returned with `Content-Encoding: gzip`.

クライアントが `Accept-Encoding: gzip` を送ると、テキストレスポンスは `Content-Encoding: gzip` で返されます。

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

Static requests support validators and ranges:

- `If-None-Match` / `If-Modified-Since` can return `304 Not Modified`
- `Range: bytes=...` can return `206 Partial Content`
- invalid ranges return `416 Range Not Satisfiable`

ディレクトリを指す静的パスは、`index.html` や `index.htm` があればそのファイルに解決されます。

For request bodies, the current implementation accepts both normal `Content-Length` bodies and chunked transfer encoding.

リクエストボディは `Content-Length` と chunked transfer encoding の両方を扱えます。

For text responses, gzip is applied dynamically when the request allows it. Binary image responses are sent as-is.

テキストレスポンスは必要に応じて動的に gzip 圧縮されます。画像などのバイナリレスポンスはそのまま送ります。

## Virtual hosts

If a directory exists at `vhosts/<host>/`, requests with `Host: <host>` are served from that directory instead of the default project root.

Example:

```text
vhosts/
  example.test/
    index.html
    cgi-bin/
      app.cgi
```

The repository includes a tiny sample at `vhosts/example.test/index.html`.

`vhosts/<host>/` が存在する場合、`Host: <host>` のリクエストはデフォルトのプロジェクトルートではなく、そのディレクトリから配信されます。

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

If a CGI already emits a full HTTP-style response, `webweb` forwards it as-is. Otherwise it wraps the CGI stdout as a normal HTML `200 OK` response.

CGI がすでに HTTP 形式のレスポンスを返している場合はそのまま転送し、そうでない場合は通常の HTML `200 OK` レスポンスとして包みます。

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
- request parsing for GET, POST, keep-alive, and chunked body input
- gzip compression negotiation
- host-based virtual document roots
- static file serving
- CGI execution model
- fork-based parallel connection handling
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
- The server now includes keep-alive, chunked body support, gzip compression, virtual hosts, timeout handling, path normalization, and fork-based parallel workers, but it is still a compact reference implementation rather than a hardened production server.
- The HTTP side is much closer to a practical small server than a toy sample, but it still does not aim to replace nginx, Apache, or Caddy.
- `clean_build.sh` removes build outputs from `webweb`, `cgi-bin`, and `dbdb`.

`webweb` は「一般的なWebサーバーの作り方をneo-cで示す実例」として使うのが一番分かりやすいです。
