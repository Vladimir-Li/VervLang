#include "../include/defs.h"

void put_err() {
    fprintf(stderr, "ERROR: %s\n", strerror(errno));
    exit(EXIT_FAILURE);
}

void code_print(code c) {
    printf("\n%s\n", c.data);
}
