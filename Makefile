BISON = ${HOME}/bison-1.875

SUBDIRS=$(patsubst %Makefile,%,$(wildcard */Makefile))

all clean realclean: $(SUBDIRS)
	for d in $(SUBDIRS); do (cd ./$$d ; $(MAKE) $@ ); done

setup:
	cp bison/data/yaxx.c $(BISON)/data
	cd $(BISON); ./configure --prefix=${HOME}/software --program-suffix=1.875
