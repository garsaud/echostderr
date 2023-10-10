CFLAGS=-Wall -Os -fno-ident -fno-asynchronous-unwind-tables -ffreestanding
CC=gcc ${CFLAGS}
INSTALL_DIR=/usr/local/bin

.PHONY: all
all: echostderr

echostderr:
	${CC} -o $@ *.c

clean:
	rm ./echostderr

install:
	install ./echostderr ${INSTALL_DIR}
