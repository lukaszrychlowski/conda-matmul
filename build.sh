#!/usr/bin/env bash
set -e

mkdir -p $PREFIX/lib
mkdir -p $PREFIX/include

if [[ "$(uname)" == "Darwin" ]]; then
    gcc -dynamiclib -o $PREFIX/lib/libmatmul.dylib matmul.c
else
    gcc -shared -fPIC -o $PREFIX/lib/libmatmul.so matmul.c
fi

mkdir -p $PREFIX/include
cp matmul.h $PREFIX/include/