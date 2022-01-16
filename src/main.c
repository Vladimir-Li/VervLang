#include "../include/defs.h"
#include "../include/filehandler.h"
#include "../include/lexer.h"
#include "../include/parser.h"



int main(int argc, char **argv) {
    code kx;

    if(!argv[1]) {
        fprintf(stderr, "No input file specified\n");
        exit(EXIT_FAILURE);
    }
    
    char *c = fileimport(argv[1]);
    kx.data = c;
    code_print(kx);

    
    return EXIT_SUCCESS;
}
