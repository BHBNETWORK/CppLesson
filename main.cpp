#include <stdio.h>

#ifdef XBTTrace
#error "XBTrace already defined"
#endif

#define XBTTrace(theMessage) XBTPrivateTrace ((theMessage), __FILE__, __LINE__, __func__)

static void XBTPrivateTrace (const char  * theMessage,  const char * theFileName, const int theLine, const char * theFunction){
	printf ("Message: %s, File name: %s; Line: %d, func: %s;\n", theMessage, theFileName, theLine, theFunction);
}

int main (){
	//  char, int, float, double.
	// signed or unsigned
	// short 4 bytes or long 8 bytes
	//	const char * aString = "Hello World\n";
	const char  aString [] ={'H', 'e', 'l', 'l', 'o', 0};

	XBTTrace (aString);
	return 0;
}

