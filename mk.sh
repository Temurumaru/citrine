#!/bin/sh
#MK Script
#Written by Gabor de Mooij
#Decides which makefile to use
OS=$(uname -s)
if [ "$OS" = "OpenBSD" -o "$OS" = "FreeBSD" ]; then
	echo "using BSD Makefile."
	make -f makefile.bsd clean
	make -f makefile.bsd all
	./ctr -g dictionary.h i18n/nl/dictionarynl.h > ennl.dict #build Dutch dictionary
	cat i18n/nl/extra.dict >> ennl.dict #extra translations
	make -f makefile.bsd.nl clean
	make -f makefile.bsd.nl all
else
	echo "using Linux Makefile."
	make -f makefile
fi

#Clear object files
rm *.o
