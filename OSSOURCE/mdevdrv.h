/** MDevDrv.h  MMURTL Device Drive and ISR prototypes ****/

/*
 
   MMURTL Operating System Source Code
   Written by  Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


extern long InitDevDr(long dDevNum,
				    	  char *pDCBs,
					  	  long nDevices,
					  	  long dfReplace);

extern long DeviceOp(unsigned long dDevice,
 		                 unsigned long dOpNum,
						 unsigned long dLBA,
						 unsigned long dnBlocks,
						 unsigned char  *pData);

extern long DeviceStat(unsigned long dDevice,
						   char  *pStatRet,
						   unsigned long dStatusMax,
						   unsigned long *pdSatusRet);

extern long DeviceInit(unsigned long dDevNum,
						   char *pInitData,
						   unsigned long sdInitData);

extern long UnMaskIRQ(long IRQNum);
extern long MaskIRQ(long IRQNum);
extern long SetIRQVector(long IRQNum, char *pIRQ);
extern long EndOfIRQ(long IRQNum);

/************ End of Module ***********/
