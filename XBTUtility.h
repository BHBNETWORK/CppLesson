#ifndef XBTUtility_h
#define XBTUtility_h

#ifdef XBTTrace
#error "XBTrace already defined"
#endif

#define XBTTrace(theMessage) XBTPrivateTrace ((theMessage), __FILE__, __LINE__, __func__)

extern void XBTPrivateTrace (const char  * theMessage,  const char * theFileName, const int theLine, const char * theFunction);


#endif