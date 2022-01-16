#include "../include/defs.h"
#include "../include/filehandler.h"
#include "../include/lexer.h"
#include "../include/parser.h"

int main(int argc, char **argv) {

    if(!argv[1]) {
        fprintf(stderr, "No input file specified\n");
        exit(EXIT_FAILURE);
    }

    char *c = fileimport(argv[1]);
    printf("\n%s\n", c);

    
    return EXIT_SUCCESS;
}