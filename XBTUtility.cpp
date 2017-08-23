#include <stdio.h>

void XBTPrivateTrace (const char  * theMessage,  const char * theFileName, const int theLine, const char * theFunction){
	printf ("Message: %s, File name: %s; Line: %d, func: %s;\n", theMessage, theFileName, theLine, theFunction);
}
