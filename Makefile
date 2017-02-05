CFLAGS = -g -Wall

DEFAULT: linear-search.check

%.check: check.c %.c
	$(CC) -o $@ $^

%.test: test.c %.c
	$(CC) -o $@ $^
