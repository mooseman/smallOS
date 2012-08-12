/* MFiles.h    MMURTL File service direct blocking calls */

/* 

   MMURTL Operating System Source Code
   Written by  Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


#define ModeRead 0
#define ModeModify 1

extern long CreateFile(char *pName, long cbName, long Attrib);

extern long CreateDir(char *pName, long cbName);

extern long DeleteDir(char *pName, long cbName);

extern long OpenFile(char *pName, long cbName, char Mode,
						char fStream, long *pdHandleRet);


extern long RenameFile(char *pCrntName, long cbCrntName,
                           char *pNewName, long cbNewName);
extern long GetFileSize(long dHandle, long *pdSizeRet);
extern long SetFileSize(long dHandle, long dSize);

extern long ReadBlock (long dHandle, char *pBytesRet, long nBytes,
            	          long dLFA, long *pdnBytesRet);
extern long WriteBlock(long dHandle,
		                   char *pData,
        		           long nBytes,
		                   long dLFA,
        		           long *pdnBytesRet);
extern long ReadBytes (long dHandle, char *pBytesRet,
                	      long nBytes, long *pdBytesRet);
extern long WriteBytes (long dHandle, char *pBytes,
                	      long nBytes, long *pdBytesRet);
extern long GetFileLFA(long dHandle, long *pdLFARet);
extern long SetFileLFA(long dHandle, long dLFA);
extern long CloseFile (long dHandle);
extern long DeleteFile (long dHandle);

extern long GetDirSector(char *pPathSpec,
							 long cbPathSpec,
                             char *pSectorRet,
							 long sSectorRet,
				   			 long SectorNum);

/****** End of Module ********/
