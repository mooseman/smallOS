

#  Makefile for DASM   

#  Acknowledgement -  Many thanks to kjohri on the 
#  Ubuntu forum for help with this.   

CC = gcc
CFLAGS = -O2 -Wall -g $(DEFINES)
# INCPATH = -I.
INCPATH = .  
LDFLAGS = $(SYSLDFLAGS) $(MYLDFLAGS)
LIBS = -l$(SYSLIBS) $(MYLIBS)
RM = rm -f 
HEADERS= dasm.h  dprotos.h  runfile.h  
OBJECTS = dasm.o  dasmdbg.o  dasmq.o  
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

dasm: $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS)

dasm.o: $(HEADERS)
dasmdbg.o: $(HEADERS)
dasmq.o: $(HEADERS)

.PHONY: clean
clean:
	rm *.o dasm





