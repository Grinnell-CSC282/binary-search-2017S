CFLAGS = -g -Wall

DEFAULT: linear-search.check

%.check: check.c %.c
	$(CC) -o $@ $^
