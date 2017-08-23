#include <stdio.h>
#include <assert.h>
#include "XBTComplex.h"

#pragma mark - Prototypes

static void XBTComplexInit (XBTComplex * theComplex, const int theReal, const int theImag);
static void XBTComplexDump (const XBTComplex * theComplex);
void XBTInit (XBTComplex * theXBTComplex);

#pragma mark - Definitions

static void XBTComplexInit (XBTComplex * theComplex, const int theReal, const int theImag){
	assert (NULL != theComplex);
	theComplex->fReal = theReal;
	theComplex->fImag = theImag;
}

static void XBTComplexDump (const XBTComplex * theComplex){
	assert (NULL != theComplex);
	printf ("theComplex: %p, (%d, %d);\n", (void *) theComplex, theComplex->fReal, theComplex->fImag);
}

void XBTInit (XBTComplex * theXBTComplex){
	assert (NULL != theXBTComplex);
	theXBTComplex->Init = XBTComplexInit;
	theXBTComplex->Dump = XBTComplexDump;
}

#pragma mark - CXBTComplex

void CXBTComplex::Dump (){
	// static_cast, reinterpret_cast, dynamic_cast
	printf ("theComplex: %p, (%d, %d);\n", static_cast <void *> (this), this->fReal, this->fImag);
}

