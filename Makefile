CC = g++
CFLAGS = -Wall -ansi -pedantic
LDFLAGS = -Wall -ansi -pedantic

main: main.obj XBTUtility.obj
	$(CC) $(LDFLAGS) -o out/main.out obj/XBTUtility.obj obj/main.obj

main.obj: main.cpp
	$(CC) $(CFLAGS) -c -o obj/main.obj source/main.cpp

main.cpp:

XBTUtility.obj: XBTUtility.cpp
	$(CC) $(CFLAGS) -c -o obj/XBTUtility.obj source/XBTUtility.cpp

XBTUtility.cpp:

.PHONY: clean
clean:
	-rm -f out/*.out obj/*.obj