/* MMemory.h   MMURTL OS Memory managment prototypes */

/* 

     MMURTL Operating System Source Code
     Written by  Richard A. Burgess

     This code is released to the public domain. 
     "Share and enjoy....."   ;) 

*/

extern far U32 AllocPage(U32 nPages, U8 **ppMemRet);
extern far U32 AllocOSPage(U32 nPages, U8 **ppMemRet);
extern far U32 AllocDMAPage(U32 nPages, U8 **ppMemRet, U32 *pPhyMemRet);
extern far U32 DeAllocPage(U8 *pOrigMem, U32 nPages);
extern far U32 QueryPages(U32 *pdPagesLeft);
extern far U32 GetPhyAdd(U32 JobNum, char *LinAdd, U32 *pPhyRet);
extern far U32 AliasMem(U8 *pMem, U32 dcbMem, U32 dJobNum, U8 **ppAliasRet);
extern far U32 DeAliasMem(U8 *pAliasMem, U32 dcbAliasBytes, U32 JobNum);


/******** End of module *********/
