/* MData.h  MMURTL high speed data manipulation & I/O calls */

/* 
 
    MMURTL Operating System Source Code
    Written by Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


extern void CopyData(char *pSource, char *pDestination, long dBytes);
extern void FillData(char *pDest, long cBytes, char bFill);
extern long CompareNCS(char *pS1, char *pS2, long dSize);
extern long Compare(char *pS1, char *pS2, long dSize);

extern void OutByte(char Byte, int wPort);
extern void OutWord(int Word, int wPort);
extern unsigned char InByte(int wPort);
extern unsigned int InWord(int wPort);
extern unsigned char ReadCMOS(int Address);

/************ End of Module **********/
