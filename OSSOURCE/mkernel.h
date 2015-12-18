/* MKernel.h   MMURTL OS KERNEL PROTOTYPES */

/*   MMURTL Operating System Source Code  */ 
/*   Written by  Richard A. Burgess                   */ 
 
/*   This code is released to the public domain.    */ 
/*    "Share and enjoy....."   ;)                                  */ 


extern long AllocExch(long *pExchRet);

extern long DeAllocExch(long Exch);

extern long GetTSSExch(long  *pExchRet);

extern long SetPriority(long bPriority);

extern long NewTask(long JobNum,
					   long CodeSeg,
					   long Priority,
					   long fDebug,
					   long Exch,
					   long ESP,
					   long EIP);

extern SpawnTask(char *pEntry,
		             long dPriority,
                     long fDebug,
                     char *pStack,
           		     long fOSCode);

extern long SendMsg(long Exch, long msg1, long msg2);

extern long ISendMsg(long Exch, long msg1, long msg2);

extern long WaitMsg(long Exch, char *pMsgRet);

extern long CheckMsg(long Exch, char *pMsgRet);

extern long Request(char *pSvcName,
						int  wSvcCode,
						long dRespExch,
						long *pRqHndlRet,
						long dnpSend,
						char *pData1,
						long dcbData1,
						char *pData2,
						long dcbData2,
						long dData0,
						long dData1,
						long dData2);

extern long MoveRequest(long dRqBlkHndl, long dDestExch);

extern long Respond(long dRqHndl, long dStatRet);

struct RqBlkType {			/* 64 byte Request block structure */
	long ServiceExch;
	long RespExch;
	long RqOwnerJob;
	long ServiceRoute;
	char *pRqHndlRet;
	long dData0;
	long dData1;
	long dData2;
	int  ServiceCode;
	char npSend;
	char npRecv;
	char *pData1;
	long cbData1;
	char *pData2;
	long cbData2;
	long RQBRsvd1;
	long RQBRsvd2;
	long RQBRsvd3;
	};


/******* End of MKernel.h ******/  


