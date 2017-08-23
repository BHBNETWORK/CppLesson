#include <stdio.h>
#include <assert.h>

// Prototypes:
void XBTPrivateTrace (const char  * theMessage,  const char * theFileName, const int theLine, const char * theFunction);
int Division (const int theNumerator, const int theDenominator);
bool DivisionIf (const int theNumerator, const int theDenominator, int * theResult);


// Definitions:
void XBTPrivateTrace (const char  * theMessage,  const char * theFileName, const int theLine, const char * theFunction){
	assert (NULL != theMessage);
	assert (NULL != theFileName);
	assert (NULL != theFunction);
	printf ("Message: %s, File name: %s; Line: %d, func: %s;\n", theMessage, theFileName, theLine, theFunction);
}

int Division (const int theNumerator, const int theDenominator){
	assert (0 != theDenominator);
	return theNumerator/theDenominator;
}

bool DivisionIf (const int theNumerator, const int theDenominator, int * theResult){
	assert (NULL != theResult);
	bool ret = false;
	if (0 != theDenominator){
		ret = true;
		*theResult = Division (theNumerator, theDenominator);
	}
	return ret;
}