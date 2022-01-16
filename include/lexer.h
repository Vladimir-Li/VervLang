#ifndef _LEXER_H_
#define _LEXER_H_

#include "defs.h"

extern int line;

typedef struct {
    int token;
    int hash;
    char *name;
    int class;
    int type;
    int vlaue;
    int Bclass;
    int Btype;
    int Bvalue;
}identifier;

#endif /*_LEXER_H_*/
