#include <stdio.h>

int main (){
	//  char, int, float, double.
	// signed or unsigned
	// short 4 bytes or long 8 bytes
	//	const char * aString = "Hello World\n";
	const char aString [] = {'H', 'e', 'l', 'l', 'o', 0};
	printf ("%p", aString);
	return 0;
}

