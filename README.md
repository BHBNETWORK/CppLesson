# CppLesson

Very simple project as a support for a lesson of one day on C/C++

## Installation

```

$ git clone https://github.com/BHBNETWORK/CppLesson.git
$ cd CppLesson
$ mkdir out
$ mkdir obj
$ make
g++ -Wall -pedantic -g -c -o obj/main.obj source/main.cpp
g++ -Wall -pedantic -g -c -o obj/XBTUtility.obj source/XBTUtility.cpp
g++ -Wall -pedantic -g -c -o obj/XBTComplex.obj source/XBTComplex.cpp
g++ -Wall -pedantic -g -o out/main.out obj/XBTUtility.obj obj/XBTComplex.obj obj/main.obj
$ ./out/main.out 
gCounter = 1;
Message: bye bye, File name: source/main.cpp; Line: 27, func: mainTestTrace;
theComplex: 0x7fff510558d8, (1, 2);
theComplex: 0x7fff510558d0, (3, 4);
```
