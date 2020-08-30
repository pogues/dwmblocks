PREFIX ?= /usr/local
SCRIPT_DIR ?= ~/.config/dwm/bar

ifneq (,$(wildcard /sys/class/power_supply/BAT1))
	# have a laptop as the battery is present
	CFLAGS = -DLAPTOP
else
	CFLAGS =
endif

output: dwmblocks.o
	gcc dwmblocks.o -lX11 -o dwmblocks

dwmblocks.o: dwmblocks.c config.h
	gcc -c $(CFLAGS) -lX11 dwmblocks.c

clean:
	rm -f *.o *.gch dwmblocks

install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks

installscripts:
	mkdir -p $(SCRIPT_DIR)
	cp scripts/* $(SCRIPT_DIR)
	chmod 755 $(SCRIPT_DIR)/*

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks
