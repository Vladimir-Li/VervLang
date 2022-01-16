#ifndef _DEFS_H_
#define _DEFS_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>

extern int errno;

void put_err() {
    fprintf(stderr, "ERROR: %s\n", strerror(errno));
    exit(EXIT_FAILURE);
}

typedef struct code{
    char *data;
} code;

#endif /*_DEFS_H_*/