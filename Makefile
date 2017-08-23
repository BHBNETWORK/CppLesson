CC = g++
CFLAGS = -Wall -ansi -pedantic -g
LDFLAGS = -Wall -ansi -pedantic -g

main: main.obj XBTUtility.obj XBTUtility.h
	$(CC) $(LDFLAGS) -o out/main.out obj/XBTUtility.obj obj/main.obj

main.obj: main.cpp
	$(CC) $(CFLAGS) -c -o obj/main.obj source/main.cpp

main.cpp:

XBTUtility.obj: XBTUtility.cpp
	$(CC) $(CFLAGS) -c -o obj/XBTUtility.obj source/XBTUtility.cpp

XBTUtility.cpp:

XBTUtility.h:

.PHONY: clean
clean:
	-rm -f out/*.out obj/*.obj