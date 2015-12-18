/** MDevDrv.h  MMURTL Device Drive and ISR prototypes ****/

/*
 
   MMURTL Operating System Source Code
   Written by  Richard A. Burgess
 
   This code is released to the public domain. 
   "Share and enjoy....."   ;) 

*/


extern long InitDevDr(long dDevNum, char *pDCBs, long nDevices, long dfReplace);

extern long DeviceOp(long dDevice, long dOpNum, long dLBA, long dnBlocks, char *pData);

extern long DeviceStat(long dDevice, char *pStatRet, long dStatusMax, long *pdSatusRet);

extern long DeviceInit(long dDevNum, *pInitData, long sdInitData);

extern long UnMaskIRQ(long IRQNum);
extern long MaskIRQ(long IRQNum);
extern long SetIRQVector(long IRQNum, char *pIRQ);
extern long EndOfIRQ(long IRQNum);

/************ End of Module ***********/
