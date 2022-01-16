CC = gcc
CFLAGS = -pedantic -Wall -std=c11
LDFLAGS =

SRC:= $(wildcard src/*.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

Verv: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	-rm -f src/*.o Verv