V="0.9.5"
for ISO in $(ls ../i18n)
do
	#Remove previous working dir
	rm -rf /tmp/dist
	#Create folder structure
	mkdir /tmp/dist
	mkdir /tmp/dist/bin
	mkdir /tmp/dist/examples
	mkdir /tmp/dist/fonts
	#Copy license
	cp ../LICENSE /tmp/dist/
	#Copy binary
	cp ../bin/Win32/ctr${ISO}.exe /tmp/dist/bin/ctr${ISO}.exe
	#Copy examples
	cp ../examples/${ISO}/* /tmp/dist/examples/
	#Copy font
	cp ../fonts/Citrine.ttf /tmp/dist/fonts/
	#Archive
	cd /tmp
	rm citrine${V}-win32-${ISO}.zip
	zip -r citrine${V}-win32-${ISO}.zip dist/*
	cd -
	cp /tmp/citrine${V}-win32-${ISO}.zip downloads/Windows32/citrine${V}-win32-${ISO}.zip
done
