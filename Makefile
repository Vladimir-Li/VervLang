CC = gcc
CFLAGS = 
LDFLAGS =

SRC:= $(wildcard src/*.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

Verv: $(OBJ)
	gcc -o $@ $^

.PHONY: clean
clean:
	-rm -f src/*.o Verv