/* MJob.h    MMURTL Job Management prototypes ****/

/* 

   MMURTL Operating System Source Code
   Written by  Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


#define ErcBadJobNum	70	/* Bad job number was specified in OS call */
#define ErcInvalidJCB	71	/* Specified an unassigned JCB */
#define ErcBadRunFile	74	/* Run file you specified is NOT a run file */
#define ErcBadJobParam	76	/* Bad length in parameter to JCB call */

struct JCBRec {
	long 			JobNum;
	char 			sbJobName[14];		/* 13 bytes. First byte is length */
	char			*pJcbPD;			/* Linear add of Job's PD (0=unused) */

	char 			*pJcbCode;			/* User Address of code segment */
	long			sJcbCode;			/* Size of user code segment */
	char			*pJcbData;			/* User Adresss of data segment */
	long 			sJcbData;			/* Size of user data segment */
	char 			*pJcbStack;			/* User Addrees of first stack */
	long			sJcbStack;			/* Size of user first stack */

	char 			sbUserName[30];		/* User Name for Job - LString */
	char 			sbPath[70];			/* path name (prefix) - LString */
	char 			JcbExitRF[80];		/* Exit Run file (if any) - LString */
	char 			JcbCmdLine[80];		/* Command Line string - LString */
	char 			JcbSysIn[50];		/* Standard input  - LString */
	char 			JcbSysOut[50];		/* Standard output - LString */

	long  			ExitError;			/* Error Set by ExitJob */
	char 			*pVidMem;			/* pointer to crnt video buffer */
	char 			*pVirtVid;			/* Virtual Video Buffer Address */
	long 			CrntX;				/* Current cursor position */
	long 			CrntY;
	long 			nCols;				/* Virtual Screen Size */
	long 			nLines;
	long 			VidMode;			/* 0 = 80x25 VGA color text */
	long 			NormVid;			/* 7 = WhiteOnBlack */

	char 			fCursOn;			/* FLAG 1 = Cursor is visible */
	char 			fCursType;			/* FLAG	(0=UL, 1 = Block) */
	char 			ScrlCnt;			/* Count since last pause  */
	char 			fVidPause;			/* Full screen pause (Text mode) */
	long 			NextJCB;			/* OS Uses to allocate JCBs */
	char JcbRsvd1[512-22-24-360-36-8];	/* Padded to 512 */
	};

extern long GetpJCB(long dJobNum, char *pJCBRet);
extern long GetJobNum(long *pJobNumRet);
extern long LoadNewJob(char *pFileName, long cbFileName, long *pJobNumRet);
extern long Chain(char *pFileName, long cbFileName, long dExitError);
extern void ExitJob(long dError);
extern void KillJob(long JubNum);

extern long SetUserName(char *pUser, long dcbUser);
extern long GetUserName(char *pUserRet, long *pdcbUserRet);

extern long SetCmdLine(char *pCmd, long dcbCmd);
extern long GetCmdLine(char *pCmdRet, long *pdcbCmdRet);

extern long SetPath(char *pPath, long dcbPath);
extern long GetPath(long JobNum, char *pPathRet, long *pdcbPathRet);

extern long SetExitJob(char *pRunFile, long dcbRunFile);
extern long GetExitJob(char *pRunRet, long *pdcbRunRet);

extern long SetSysIn(char *pFile, long dcbFile);
extern long GetSysIn(char *pFileRet, long *pdcbFileRet);

extern long SetSysOut(char *pFile, long dcbFile);
extern long GetSysOut(char *pFileRet, long *pdcbFileRet);

extern long SetJobName(char *pName, long dcbName);

extern long RegisterSvc(char *pName, long Exch);

extern long UnRegisterSvc(char *pName);

extern long GetSystemDisk(char *pDiskRet);

/****** End of Job.h *******/
