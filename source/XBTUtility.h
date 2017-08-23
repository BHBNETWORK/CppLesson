#ifndef XBTUtility_h
#define XBTUtility_h

#pragma mark - Macros

#ifdef XBTTrace
#error "XBTrace already defined"
#endif

#define XBTTrace(theMessage) XBTPrivateTrace ((theMessage), __FILE__, __LINE__, __func__)

#pragma mark - External functions

extern void XBTPrivateTrace (const char  * theMessage,  const char * theFileName, const int theLine, const char * theFunction);
extern int Division (const int theNumerator, const int theDenominator);
extern bool DivisionIf (const int theNumerator, const int theDenominator, int * theResult);

#pragma mark - External variables

extern int gCounter;

#endif
