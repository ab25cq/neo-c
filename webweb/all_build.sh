#!/bin/sh
set -eu

pkill dbdb 2>/dev/null || true

(cd dbdb && make all)
nohup ./dbdb/dbdb > ./dbdb/dbdb.log 2>&1 &

# Wait briefly for dbdb to accept local connections.
i=0
while [ "$i" -lt 50 ]; do
    if nc -z 127.0.0.1 3366 >/dev/null 2>&1; then
        break
    fi
    i=$((i + 1))
    sleep 0.1
done

make all
make run
