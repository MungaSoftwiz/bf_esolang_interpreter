#ifndef BF_H
#define BF_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define INITIAL_SIZE 1024
#define CELL_SIZE 30000
/*extern FILE* fp;*/
extern bool integer_option;

/* check validity of character */
bool valid(char c);

/* process the characters in the file */
void process_file(const char *filename, char **bf_code);
void interpret_instruction(char *code);

/* error functions */
void argument_error(int argc, char **argv);
void malloc_error(char *bf_code);

#endif /* BF_H */
