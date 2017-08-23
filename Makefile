CC = g++
CFLAGS = -Wall -pedantic -g
LDFLAGS = -Wall -pedantic -g

main: main.obj XBTUtility.obj XBTComplex.obj XBTUtility.h XBTComplex.h
	$(CC) $(LDFLAGS) -o out/main.out obj/XBTUtility.obj obj/XBTComplex.obj obj/main.obj

main.obj: main.cpp
	$(CC) $(CFLAGS) -c -o obj/main.obj source/main.cpp

main.cpp:

XBTUtility.obj: XBTUtility.cpp
	$(CC) $(CFLAGS) -c -o obj/XBTUtility.obj source/XBTUtility.cpp

XBTUtility.cpp:

XBTUtility.h:

XBTComplex.obj: XBTComplex.cpp
	$(CC) $(CFLAGS) -c -o obj/XBTComplex.obj source/XBTComplex.cpp

XBTComplex.cpp:

XBTComplex.h:

.PHONY: clean
clean:
	-rm -f out/*.out obj/*.obj