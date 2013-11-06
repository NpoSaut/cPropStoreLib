C:\Qt\Tools\mingw48_32\bin\gcc -DBUILDING_DLL -c cpropstorelib.c
C:\Qt\Tools\mingw48_32\bin\gcc -static-libgcc -shared --enable-runtime-pseudo-reloc -o cpropstorelib.dll cpropstorelib.o -Wl,--out-implib,libcpropstorelib.a
C:\Qt\Tools\mingw48_32\bin\gcc -c test.c
C:\Qt\Tools\mingw48_32\bin\gcc -o test.exe test.o -L. -lcpropstorelib
