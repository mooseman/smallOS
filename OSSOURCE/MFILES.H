/* MFiles.h    MMURTL File service direct blocking calls */

/* 

   MMURTL Operating System Source Code
   Written by  Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


#define ModeRead 0
#define ModeModify 1

extern far long CreateFile(char *pName, long cbName, long Attrib);

extern far long CreateDir(char *pName, long cbName);

extern far long DeleteDir(char *pName, long cbName);

extern far long OpenFile(char *pName, long cbName, char Mode,
						char fStream, long *pdHandleRet);


extern far long RenameFile(char *pCrntName, long cbCrntName,
                           char *pNewName, long cbNewName);
extern far long GetFileSize(long dHandle, long *pdSizeRet);
extern far long SetFileSize(long dHandle, long dSize);

extern far long ReadBlock (long dHandle, char *pBytesRet, long nBytes,
            	          long dLFA, long *pdnBytesRet);
extern far long WriteBlock(long dHandle,
		                   char *pData,
        		           long nBytes,
		                   long dLFA,
        		           long *pdnBytesRet);
extern far long ReadBytes (long dHandle, char *pBytesRet,
                	      long nBytes, long *pdBytesRet);
extern far long WriteBytes (long dHandle, char *pBytes,
                	      long nBytes, long *pdBytesRet);
extern far long GetFileLFA(long dHandle, long *pdLFARet);
extern far long SetFileLFA(long dHandle, long dLFA);
extern far long CloseFile (long dHandle);
extern far long DeleteFile (long dHandle);

extern far long GetDirSector(char *pPathSpec,
							 long cbPathSpec,
                             char *pSectorRet,
							 long sSectorRet,
				   			 long SectorNum);

/****** End of Module ********/
