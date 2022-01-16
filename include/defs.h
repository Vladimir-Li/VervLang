#pragma once

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

typedef struct code{
    char *data;
} code;

void put_err();

void code_print(code c);

#endif /*_DEFS_H_*/
