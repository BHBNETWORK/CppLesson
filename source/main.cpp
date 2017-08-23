#include <stdio.h>
#include <stdlib.h>
#include "XBTUtility.h"
#include "XBTComplex.h"


int mainTestTrace (){
	//  char, int, float, double.
	// signed or unsigned
	// short 4 bytes or long 8 bytes
	
	typedef union {
		char * fString;
		int fNumber;
	} TUnion;
	
	TUnion aUnion;
	aUnion.fString = (char *) malloc (256);
	if (NULL == aUnion.fString){
		XBTTrace ("malloc error");
	}
	else{
		sprintf (aUnion.fString,  "Hello World: compile date and time: %s, %s", __DATE__, __TIME__);
		++gCounter;
		
		printf ("gCounter = %d", gCounter);
		XBTTrace ("bye bye");
		free (aUnion.fString);
		aUnion.fString = NULL;
		
	}
	return 0;
}

int mainTestComplex (){
	XBTComplex aComplex;
	XBTComplexInit (&aComplex, 1, 2);
	XBTComplexDump (&aComplex);
}

int main (){
	mainTestComplex ();
}

