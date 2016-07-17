LD = gcc
all : initadv.exe

fatal.o: fatal.c
getlin.o: getlin.c adv_ext.h ../common/advexter.h
getobj.o: getobj.c adv_ext.h ../common/advexter.h
iactio.o: iactio.c adv_ext.h ../common/advexter.h
icave.o: icave.c adv_ext.h ../common/advexter.h
iclass.o: iclass.c adv_ext.h ../common/advexter.h
ievent.o: ievent.c adv_ext.h ../common/advexter.h
imessa.o: imessa.c adv_ext.h ../common/advexter.h
initadv.o: initadv.c adv_ini.h ../common/advcommo.h
iobjec.o: iobjec.c adv_ext.h ../common/advexter.h
ivocab.o: ivocab.c adv_ext.h ../common/advexter.h
putcnd.o: putcnd.c adv_ext.h ../common/advexter.h
putmes.o: putmes.c adv_ext.h ../common/advexter.h
screen.o: screen.c
stat.o: stat.c ../common/advexter.h

vocab.o : ../common/vocab.c ../common/advexter.h
	$(CC) -c ../common/vocab.c

savecm.o : ../common/savecm.c ../common/advexter.h
	$(CC) -c ../common/savecm.c

initadv.exe : fatal.o getlin.o getobj.o iactio.o icave.o iclass.o \
	ievent.o imessa.o initadv.o iobjec.o ivocab.o         \
	putcnd.o putmes.o screen.o stat.o vocab.o savecm.o
	$(LD) $(LDFLAGS) $^ -o $@

clean : 
	rm *.o *.exe

.PHONY: all clean
