shsh

It's a simple shell. It incorporates zed, making it easy to write one-liners.

If the first character is ! or .[a-zA-Z], you can use zed to process the text.

Redirects, subshells, and environment variables are implemented.

For more information on zed, please see the README for zed.

シンプルなシェルです。zedを組み込んでいてワンライナーが書きやすいです。

先頭の文字が!や.[a-zA-Z]の場合zedでテキスト処理ができます。

リダイレクト、サブシェル、環境変数関連は実装しています。

zedについてはzedの方のREADMEを見てください。

```
> echo aaa | !.scan(/./).join("+") | less
a+a+a

> !1+1
2
```

