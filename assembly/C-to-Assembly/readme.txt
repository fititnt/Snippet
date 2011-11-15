Complile C:
gcc helloworld.c -o helloworld-in-c.exe

Generate Assembly from C code:
gcc helloworld.c -S -m32 -o helloworld-from-c.s

Compile Assembly code:
gcc helloworld-from-c.s -m32 -o helloworld-in-assembly.exe





PS C:\Users\fititnt> as --version
GNU assembler (GNU Binutils) 2.20.51.20100613
Copyright 2010 Free Software Foundation, Inc.
This program is free software; you may redistribute it under the terms of
the GNU General Public License version 3 or later.
This program has absolutely no warranty.


