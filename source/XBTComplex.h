#ifndef XBTComplex_h
#define XBTComplex_h

struct pXBTComplex;
struct pXBTComplex{
	int fReal;
	int fImag;

	void (*Init) (struct pXBTComplex * theComplex, const int theReal, const int theImag);
	void (*Dump) (const struct pXBTComplex * theComplex);
};

typedef struct pXBTComplex XBTComplex;

extern void XBTInit (XBTComplex * theXBTComplex);
#endif