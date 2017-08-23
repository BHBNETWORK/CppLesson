#ifndef XBTComplex_h
#define XBTComplex_h

typedef struct {
	int fReal;
	int fImag;
} XBTComplex;

extern void XBTComplexInit (XBTComplex * theComplex, const int theReal, const int theImag);
extern void XBTComplexDump (const XBTComplex * theComplex);

#endif