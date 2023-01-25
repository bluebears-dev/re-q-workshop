# RE Sekurity Experience

## 01-hello-world

```shell script
gcc src/01-hello-world/hello.c -o 01-hello-world/hello-c-default
gcc src/01-hello-world/hello.c -O0 -o 01-hello-world/hello-c-o0
gcc src/01-hello-world/hello.c -O1 -o 01-hello-world/hello-c-o1
gcc src/01-hello-world/hello.c -O2 -o 01-hello-world/hello-c-o2
gcc src/01-hello-world/hello.c -O3 -o 01-hello-world/hello-c-o3

g++ src/01-hello-world/hello.cpp -o 01-hello-world/hello-cpp

rustc src/01-hello-world/hello.rs -o hello-rs

mcs src/01-hello-world/ -out:01-hello-world/hello-cs.exe
```

## 02-dynamic-allocation

```shell script
g++ src/02-dynamic-allocation/check_serial.cpp -o 02-dynamic-allocation/check_serial-cpp
```

## 03-classes

```shell script
g++ src/03-classes/shuffler.cpp -o 03-classes/shuffler
```
