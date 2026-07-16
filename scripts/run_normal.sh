#!/usr/bin/env sh
set -eu

cd "$(dirname "$0")/.."
mkdir -p build/multi

echo "[1/5] single file"
c++ -std=c++17 -Wall -Wextra -pedantic examples/01_hello/hello.cpp -o build/hello
./build/hello

echo "[2/5] function demo"
c++ -std=c++17 -Wall -Wextra -pedantic examples/02_functions/function_demo.cpp -o build/function_demo
./build/function_demo

echo "[3/5] multi-file program"
c++ -std=c++17 -Wall -Wextra -pedantic examples/03_multi_file/main.cpp examples/03_multi_file/greeting.cpp examples/03_multi_file/calculator.cpp -o build/multi/multi_file_demo
./build/multi/multi_file_demo

echo "[4/5] runtime model"
c++ -std=c++17 -Wall -Wextra -pedantic examples/04_runtime_model/runtime_demo.cpp -o build/runtime_demo
./build/runtime_demo

echo "[5/5] make targets"
make all
./build/function_demo
./build/multi_file_demo

echo "normal experiments passed"
