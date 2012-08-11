/* MData.h  MMURTL high speed data manipulation & I/O calls */

/* 
 
    MMURTL Operating System Source Code
    Written by Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


extern far void CopyData(unsigned char *pSource,
						 unsigned char *pDestination,
						 unsigned long dBytes);
extern far void FillData(unsigned char  *pDest, 
						 unsigned long cBytes,
						 unsigned char  bFill);
extern far long CompareNCS(unsigned char  *pS1,
						   unsigned char  *pS2,
						   unsigned long dSize);
extern far long Compare(unsigned char *pS1,
					    unsigned char *pS2,
					    unsigned long dSize);

extern far void OutByte(unsigned char Byte, unsigned int wPort);
extern far void OutWord(unsigned int Word, unsigned int wPort);
extern far unsigned char InByte(unsigned int wPort);
extern far unsigned int InWord(unsigned int wPort);
extern far unsigned char ReadCMOS(unsigned int Address);

/************ End of Module **********/
