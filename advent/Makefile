LD = gcc

all : advent.exe

act.o: act.c ../common/advexter.h
advent.o: advent.c ../common/advcommo.h
chnloc.o: chnloc.c ../common/advexter.h
conv.o: conv.c
dark.o: dark.c ../common/advexter.h
descr.o: descr.c ../common/advexter.h
events.o: events.c ../common/advexter.h
fatal.o: fatal.c
freeze.o: freeze.c ../common/advexter.h
getans.o: getans.c
get.o: get.c ../common/advexter.h
indobj.o: indobj.c ../common/advexter.h
inpans.o: inpans.c
mes.o: mes.c ../common/advexter.h
motion.o: motion.c ../common/advexter.h
mscore.o: mscore.c
pct.o: pct.c
rspeak.o: rspeak.c ../common/advexter.h
score.o: score.c ../common/advexter.h
specia.o: specia.c ../common/advexter.h
tolower.o: tolower.c
trim.o: trim.c
yes.o: yes.c

vocab.o : ../common/vocab.c ../common/advexter.h
	$(CC) -c ../common/vocab.c

savecm.o : ../common/savecm.c ../common/advexter.h
	$(CC) -c ../common/savecm.c

advent.exe :  act.o indobj.o dark.o freeze.o        \
   inpans.o pct.o tolower.o advent.o     \
   descr.o get.o mes.o rspeak.o yes.o  \
   chnloc.o events.o getans.o motion.o   \
   score.o conv.o fatal.o mscore.o       \
   specia.o vocab.o savecm.o trim.o
	$(LD) $(LDFLAGS) $^ -o $@

clean :
	rm *.o *.exe

.PHONY: all clean

