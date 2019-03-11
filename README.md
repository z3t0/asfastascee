
# output
```sh
[vagrant@arch asfastascee]$ make
gcc -O2 -c sum1.c
gcc -O2 -c sum.c
gcc sum.o sum1.o -o sum
javac Sum.java
[vagrant@arch asfastascee]$ make run > README.md
real 0.52
user 0.51
sys 0.00
real 0.17
user 0.16
sys 0.02
```

# runtimes
```sh
[vagrant@arch asfastascee]$ gcc -v
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.1/lto-wrapper
Target: x86_64-pc-linux-gnu
Configured with: /build/gcc/src/gcc/configure --prefix=/usr --libdir=/usr/lib --libexecdir=/usr/lib --mandir=/usr/share/man --infodir=/usr/share/info --with-bugurl=https://bugs.archlinux.org/ --enable-languages=c,c++,ada,fortran,go,lto,objc,obj-c++ --enable-shared --enable-threads=posix --enable-libmpx --with-system-zlib --with-isl --enable-__cxa_atexit --disable-libunwind-exceptions --enable-clocale=gnu --disable-libstdcxx-pch --disable-libssp --enable-gnu-unique-object --enable-linker-build-id --enable-lto --enable-plugin --enable-install-libiberty --with-linker-hash-style=gnu --enable-gnu-indirect-function --enable-multilib --disable-werror --enable-checking=release --enable-default-pie --enable-default-ssp --enable-cet=auto
Thread model: posix
gcc version 8.2.1 20181127 (GCC)
[vagrant@arch asfastascee]$ java --version
openjdk 11.0.2 2018-10-16
OpenJDK Runtime Environment (build 11.0.2+7)
OpenJDK 64-Bit Server VM (build 11.0.2+7, mixed mode)
[vagrant@arch asfastascee]$ javac --version
javac 11.0.2
```

