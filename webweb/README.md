# webweb

`webweb` is a practical web server example written in neo-c.
It is not just a toy HTTP sample. It behaves like a small general-purpose web server:

- serves static files such as `.html`, `.css`, `.js`, `.jpg`, `.png`, and `.gif`
- returns practical MIME types for JSON, XML, SVG, WebP, AVIF, WASM, fonts, archives, audio, and video
- routes `/` to a directory index such as `index.html` or `index.htm`
- executes `.cgi` programs for dynamic pages
- limits CGI execution time and stdout size so runaway CGI programs are stopped
- logs CGI stderr separately from CGI stdout
- passes CGI-compatible environment variables such as `QUERY_STRING`, `DOCUMENT_ROOT`, and `SCRIPT_FILENAME`
- passes client address information to CGI through `REMOTE_ADDR` and `REMOTE_PORT`
- supports HTTP/1.1 keep-alive
- accepts both `Content-Length` and chunked request bodies
- supports `HEAD` for static files
- supports conditional static responses with `ETag` / `Last-Modified`
- supports single-range static responses with `Range: bytes=...`
- uses Linux `sendfile()` for plain HTTP static binary/range responses
- compresses text responses with gzip when the client accepts it
- switches document roots by `Host` header using `vhosts/<host>/`
- lets the operator choose HTTP/HTTPS mode, listen port, and document root from the command line
- can load the same server options from `webweb.conf` or `-config FILE`
- can generate directory listings with `-autoindex` when no index file exists
- refuses symlinks and canonical paths that escape the selected document root
- can append access logs to a selected file with `-access-log`
- writes access logs in Combined Log Format with response size, Referer, and User-Agent
- can serve custom error pages such as `404.html` and `500.html`
- can attach `Cache-Control` to static file responses
- rejects oversized request headers and URIs with explicit HTTP status codes
- handles multiple clients in parallel with forked workers
- supports both HTTP and HTTPS
- includes a small database server example in `dbdb/`

`webweb`はneo-cで書かれた実用寄りのWebサーバー例です。
単なるHTTPサンプルではなく、小さな汎用Webサーバーのように動きます。

- `.html`, `.css`, `.js`, `.jpg`, `.png`, `.gif` などの静的ファイルを配信します
- JSON, XML, SVG, WebP, AVIF, WASM, font, archive, audio, video などの実用的な MIME type を返します
- `/` は `index.html` や `index.htm` などのディレクトリインデックスにルーティングされます
- `.cgi` を動的ページとして実行できます
- CGI の実行時間と stdout サイズを制限し、暴走した CGI を停止できます
- CGI の stderr はレスポンスに混ぜず、別の error log に記録します
- `QUERY_STRING`, `DOCUMENT_ROOT`, `SCRIPT_FILENAME` などの CGI 互換環境変数を渡します
- `REMOTE_ADDR` と `REMOTE_PORT` で接続元情報も CGI に渡します
- HTTP/1.1 の keep-alive に対応しています
- `Content-Length` と chunked のリクエストボディを扱えます
- クライアントが受け付ければテキストレスポンスを gzip 圧縮します
- plain HTTP の静的バイナリ/range レスポンスでは Linux `sendfile()` を使います
- `Host` ヘッダに応じて `vhosts/<host>/` に切り替えられます
- コマンドラインで HTTP/HTTPS、listen port、document root を選べます
- 同じサーバー設定を `webweb.conf` または `-config FILE` から読み込めます
- `-autoindex` 指定時は index が無いディレクトリの一覧を生成できます
- symlink や canonical path が document root の外へ出る場合は拒否します
- `-access-log` でアクセスログの追記先ファイルを指定できます
- access log は response size, Referer, User-Agent を含む Combined Log Format で出します
- `404.html` や `500.html` などのカスタムエラーページを返せます
- 静的ファイルレスポンスへ `Cache-Control` を付けられます
- 大きすぎるリクエストヘッダや URI は明示的な HTTP ステータスで拒否します
- fork ベースで複数クライアントを並列処理します
- HTTP と HTTPS の両方に対応しています
- `dbdb/` に小さなDBサーバー例も入っています

## Features

- Static file serving
- CGI execution for GET and POST
- CGI timeout and output-size limits with explicit `504` / `502` responses
- CGI stderr logging with configurable error log output
- CGI environment compatibility for `QUERY_STRING`, `DOCUMENT_ROOT`, `SCRIPT_FILENAME`, `REQUEST_SCHEME`, and `SERVER_NAME`
- CGI `REMOTE_ADDR` / `REMOTE_PORT` and remote-address access logs
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
- Linux `sendfile()` for plain HTTP static binary and range responses
- Gzip compression for text responses
- Host-based virtual document roots
- Configurable listen port and document root
- Config file loading with CLI override
- Optional directory listing with `-autoindex`
- Canonical path containment checks to prevent symlink escapes
- Configurable access log path with stdout fallback
- Combined Log Format access logging with response body size
- Configurable static `Cache-Control`
- Custom error pages from `404.html`, `500.html`, config, or `-error-page`
- Expanded MIME type handling for modern web assets
- Fork-based parallel connection handling
- Broader Content-Type switching by extension with octet-stream fallback
- Request timeout, payload size, header size, and URI length checks
- Path normalization and percent-decoding checks
- Explicit 400/403/404/405/408/413/414/431/500/505 responses
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

You can choose another port and document root:

```sh
./webweb2 -http -port 18080 -root /path/to/site
```

`-root` also moves virtual hosts under that root, so `Host: example.test` is served from `/path/to/site/vhosts/example.test/`.

Access logs are written to stdout by default. Use `-access-log` to append them to a file:

```sh
./webweb2 -http -port 18080 -root /path/to/site -access-log /var/log/webweb/access.log
```

Access logs use Combined Log Format:

```text
127.0.0.1 - - [24/May/2026:01:09:18 +0900] "GET /index.html HTTP/1.1" 200 1234 "-" "curl/8.15.0"
```

CGI stderr and server error messages are written to stderr by default. Use `-error-log` to append them to a file:

```sh
./webweb2 -http -error-log /var/log/webweb/error.log
```

CGI programs are limited to 10 seconds and 1 MiB of stdout by default. You can change those limits from the command line:

```sh
./webweb2 -http -cgi-timeout 5 -cgi-output-limit 2097152
```

Use `0` to disable either limit.

Use `-cache-control` to add a static-file cache policy:

```sh
./webweb2 -http -cache-control "public, max-age=3600"
```

Use `off` to disable a configured cache policy.

別のポートや document root を使う場合は次のように指定できます。

```sh
./webweb2 -http -port 18080 -root /path/to/site
```

`-root` を指定すると、virtual host もその root 配下の `vhosts/<host>/` を見ます。

アクセスログはデフォルトでは stdout に出ます。ファイルへ追記したい場合は `-access-log` を指定します。

access log は Combined Log Format で、response body size, Referer, User-Agent を含みます。

CGI stderr とサーバーの error log はデフォルトでは stderr に出ます。ファイルへ追記したい場合は `-error-log` を指定します。

CGI はデフォルトで 10 秒、stdout 1 MiB に制限されます。`-cgi-timeout` と `-cgi-output-limit` で変更でき、`0` を指定すると個別に無効化できます。

静的ファイルの cache policy は `-cache-control` で指定できます。設定済みの値を無効にするには `off` を指定します。

### Config file

If `webweb.conf` exists in the current directory, it is loaded automatically. You can choose another file with `-config FILE`.
Command-line options are applied after the config file, so CLI values override config values.

Example:

```text
mode http
port 18080
root /path/to/site
autoindex on
access_log /var/log/webweb/access.log
error_log /var/log/webweb/error.log
cgi_timeout 10
cgi_output_limit 1048576
cache_control public, max-age=3600
error_page 404 errors/not_found.html
error_page_500 errors/server_error.html
```

Equivalent command:

```sh
./webweb2 -config webweb.conf
```

Supported directives:

- `mode http|https`
- `port PORT`
- `http_port PORT`
- `https_port PORT`
- `root PATH`
- `autoindex on|off`
- `access_log PATH`
- `error_log PATH`
- `cgi_timeout SECONDS`
- `cgi_output_limit BYTES`
- `cache_control VALUE`
- `error_page CODE PATH`
- `error_page_CODE PATH`

`key value` and `key=value` are both accepted. `#` starts a comment.

カレントディレクトリに `webweb.conf` があれば自動で読み込みます。別のファイルを使う場合は `-config FILE` を指定します。
設定ファイルの後にコマンドラインオプションを適用するため、CLI の指定が設定ファイルより優先されます。

Existing paths are resolved with `realpath` before serving or executing them. If a symlink points outside the selected document root, the request is rejected with `403 Forbidden`.

既存パスは配信または実行の前に `realpath` で解決されます。symlink が選択中の document root の外を指している場合、そのリクエストは `403 Forbidden` になります。

Directory listing is disabled by default. If you want directories without `index.html` or `index.htm` to show a generated listing, add `-autoindex`:

```sh
./webweb2 -http -port 18080 -root /path/to/site -autoindex
```

ディレクトリ一覧はデフォルトでは無効です。`index.html` や `index.htm` が無いディレクトリを一覧表示したい場合だけ `-autoindex` を付けます。

### HTTPS mode

Run the HTTPS server using `cert.pem` and `key.pem`:

```sh
./webweb2
```

By default, HTTPS mode listens on port `443`.

デフォルトではHTTPSモードで `443` 番ポートを使います。

HTTPS mode accepts the same server options:

```sh
./webweb2 -https -port 8443 -root /path/to/site
```

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
curl -i "http://127.0.0.1:8080/$(printf '%09000d' 1 | tr 0 a)"
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

CGI programs receive normal CGI-style environment variables. `QUERY_STRING` is preserved for both GET and POST requests, and `DOCUMENT_ROOT`, `SCRIPT_FILENAME`, `REQUEST_SCHEME`, `SERVER_NAME`, `SERVER_PORT`, `SCRIPT_NAME`, `PATH_INFO`, `REQUEST_URI`, `CONTENT_LENGTH`, `CONTENT_TYPE`, `REMOTE_ADDR`, and `REMOTE_PORT` are set when applicable.

CGI には一般的な CGI 形式の環境変数が渡されます。`QUERY_STRING` は GET だけでなく POST でも保持され、必要に応じて `DOCUMENT_ROOT`, `SCRIPT_FILENAME`, `REQUEST_SCHEME`, `SERVER_NAME`, `SERVER_PORT`, `SCRIPT_NAME`, `PATH_INFO`, `REQUEST_URI`, `CONTENT_LENGTH`, `CONTENT_TYPE`, `REMOTE_ADDR`, `REMOTE_PORT` も設定されます。

HTTP/1.1 connections are kept alive by default unless the request says `Connection: close` or the response path needs the server to close the socket.

デフォルトでは HTTP/1.1 の接続は keep-alive で維持されます。リクエストが `Connection: close` を要求した場合や、レスポンス都合で接続維持が安全でない場合は close されます。

Static files now include `Date`, `Server`, `ETag`, `Last-Modified`, and `Accept-Ranges` headers.

静的ファイルのレスポンスには `Date`, `Server`, `ETag`, `Last-Modified`, `Accept-Ranges` が付きます。

If the client sends `Accept-Encoding: gzip`, text responses are returned with `Content-Encoding: gzip`.

クライアントが `Accept-Encoding: gzip` を送ると、テキストレスポンスは `Content-Encoding: gzip` で返されます。

## Static files

Supported content types in the current implementation:

- HTML/text: `html`, `htm`, `css`, `txt`, `csv`, `md`, `yaml`
- Script/data: `js`, `mjs`, `json`, `map`, `webmanifest`, `xml`, `rss`, `atom`, `wasm`
- Images: `jpg`, `jpeg`, `png`, `gif`, `webp`, `avif`, `bmp`, `tif`, `tiff`, `svg`, `ico`
- Fonts: `woff`, `woff2`, `ttf`, `otf`, `eot`
- Archives/docs: `pdf`, `zip`, `gz`, `tar`, `tgz`, `bz2`, `br`, `7z`
- Audio/video: `mp3`, `wav`, `ogg`, `oga`, `mp4`, `webm`, `ogv`, `mov`, `mpeg`, `mpg`
- unknown extensions -> `application/octet-stream`

Images are sent as binary data with `Content-Length`.
Text and HTML files are read into memory and returned as strings.

Static requests support validators and ranges:

- `If-None-Match` / `If-Modified-Since` can return `304 Not Modified`
- `Range: bytes=...` can return `206 Partial Content`
- invalid ranges return `416 Range Not Satisfiable`

On Linux, plain HTTP binary and range responses are sent with `sendfile()`. HTTPS still uses the SSL write path because the response must pass through OpenSSL.

If `-cache-control VALUE` or `cache_control VALUE` is set, static file responses include that `Cache-Control` value together with `ETag`, `Last-Modified`, and `Accept-Ranges`.

ディレクトリを指す静的パスは、`index.html` や `index.htm` があればそのファイルに解決されます。

Linux の plain HTTP では、バイナリファイルと range レスポンスに `sendfile()` を使います。HTTPS は OpenSSL を通す必要があるため SSL write 経路のままです。

`-cache-control VALUE` または `cache_control VALUE` を設定すると、静的ファイルレスポンスにその `Cache-Control` 値を付けます。

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

If a CGI exceeds the configured timeout, `webweb` kills it and returns `504 Gateway Timeout`. If CGI stdout exceeds the configured output limit, `webweb` kills it and returns `502 Bad Gateway`.

CGI が設定された時間制限を超えた場合は停止して `504 Gateway Timeout` を返します。stdout が出力上限を超えた場合も停止して `502 Bad Gateway` を返します。

CGI stdout is the HTTP response. CGI stderr is not mixed into that response; it is written to the error log. By default the error log goes to stderr, and `-error-log FILE` or `error_log FILE` appends it to a file.

CGI stdout は HTTP レスポンスとして扱われます。CGI stderr はレスポンスへ混ぜず、error log に出します。デフォルトでは stderr、`-error-log FILE` または `error_log FILE` を指定するとファイルへ追記します。

## Custom error pages

If a readable `<status>.html` exists under the active document root, `webweb` uses it as the error response body. For example, `404.html` is used for `404 Not Found`, and `500.html` is used for `500 Internal Server Error`.

You can also set explicit files:

```sh
./webweb2 -http -error-page 404 errors/not_found.html -error-page 500 errors/server_error.html
```

or in `webweb.conf`:

```text
error_page 404 errors/not_found.html
error_page_500 errors/server_error.html
```

Relative paths are resolved under the active document root. Absolute paths are used as-is.

document root 配下に読み取り可能な `<status>.html` があれば、その内容をエラーレスポンス本文として使います。たとえば `404.html` は `404 Not Found`、`500.html` は `500 Internal Server Error` に使われます。

明示的に指定したい場合は `-error-page CODE FILE`、または設定ファイルの `error_page CODE PATH` / `error_page_CODE PATH` を使えます。相対パスは有効な document root 配下、絶対パスはそのまま使われます。

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
- The server now includes keep-alive, chunked body support, gzip compression, virtual hosts, request and CGI timeout handling, CGI output limits, path normalization, and fork-based parallel workers, but it is still a compact reference implementation rather than a hardened production server.
- The HTTP side is much closer to a practical small server than a toy sample, but it still does not aim to replace nginx, Apache, or Caddy.
- `clean_build.sh` removes build outputs from `webweb`, `cgi-bin`, and `dbdb`.

`webweb` は「一般的なWebサーバーの作り方をneo-cで示す実例」として使うのが一番分かりやすいです。
