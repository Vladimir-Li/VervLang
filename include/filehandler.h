#ifndef _FILEHANDLER_H_
#define _FILEHANDLER_H_

#include "defs.h"

char *fileimport(const char *path) {
    char *buffer = NULL;

    /* Open file */
    FILE *file = fopen(path, "r");
    if(file == NULL) { put_err(); }

    /* Allocate memory for buffer */
    fseek(file, 0L, SEEK_END);
    long bufsize = ftell(file);
    if (bufsize == -1) { put_err(); }
    buffer = (char*) malloc(sizeof(char) * (bufsize + 1));

    /* Read file into buffer */
    if(fseek(file, 0L, SEEK_SET) != 0) { put_err(); }
    size_t l = fread(buffer, sizeof(char), bufsize, file);
    if( ferror(file) != 0) { put_err(); }
    buffer[l++] = '\0';

    /* Close file */
    fclose(file);

    return buffer;
}

#endif /*_FILEHANDLER_H_*/