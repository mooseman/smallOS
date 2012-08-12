/* MTimer.h     MMURTL timer call prototypes */

/*
 
   MMURTL Operating System Source Code
   Written by  Richard A. Burgess
 
   This code is released to the public domain. 
    "Share and enjoy....."   ;) 

*/

extern long Alarm(long Exch, long count);
extern long KillAlarm(long Exch);
extern long Sleep(long count);
extern void MicroDelay(long us15count);
extern long GetCMOSTime(long *pTimeRet);
extern long GetCMOSDate(long *pTimeRet);
extern long GetTimerTick(long *pTickRet);
extern void Tone(long freq, long ms10);
extern void Beep(void);

/************ End of MTimer.h ***************/
