

#  Makefile for SmallOS    
# TO DO - Add the dasm command to this, and add the 
#  list of assembly files to compile.   

#  Acknowledgement -  Many thanks to kjohri on the 
#  Ubuntu forum for help with this.   

CC = gcc

#  Use the dasm assembler 
AS = dasm  

CFLAGS = -O2 -Wall -g $(DEFINES)
# INCPATH = -I.
INCPATH = .  
LDFLAGS = $(SYSLDFLAGS) $(MYLDFLAGS)
LIBS = -l$(SYSLIBS) $(MYLIBS)
RM = rm -f 
HEADERS= mdata.h  mdevdrv.h  mfiles.h  mjob.h  mkbd.h  mkernel.h  mmemory.h  \
		mstatus.h  mtimer.h  mvid.h  parallel.h  rs232.h  runfile.h 
OBJECTS = jobc.o  uasm.o  monitor.o  hardide.o  floppy.o fsys.o  rs232.o  parallel.o    
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

smallos: $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS)

jobc.o: $(HEADERS)
uasm.o: $(HEADERS)
monitor.o: $(HEADERS)
hardide.o: $(HEADERS)
floppy.o: $(HEADERS)
fsys.o: $(HEADERS)
rs232.o: $(HEADERS)
parallel.o: $(HEADERS)


.PHONY: clean
clean:
	rm *.o smallos 


