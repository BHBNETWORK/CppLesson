#include <stdio.h>
#include <assert.h>
#include "XBTComplex.h"

// Prototypes:
void XBTComplexInit (XBTComplex * theComplex, const int theReal, const int theImag);
void XBTComplexDump (const XBTComplex * theComplex);

// Definitions:
void XBTComplexInit (XBTComplex * theComplex, const int theReal, const int theImag){
	assert (NULL != theComplex);
	theComplex->fReal = theReal;
	theComplex->fImag = theImag;
}
void XBTComplexDump (const XBTComplex * theComplex){
	assert (NULL != theComplex);
	printf ("theComplex: %p, (%d, %d);\n", (void *) theComplex, theComplex->fReal, theComplex->fImag);
}

