#include "bf.h"

/**
 * argument_error - program to signify error in arguments
 *
 * Return: void
 */
void argument_error(int argc, char **argv)
{
	(void)argv;
	if (argc < 2 || argc > 4)
	{
		printf("Usage: [output_option] bfrun <file>\n");
		exit(EXIT_FAILURE);
	}
}

void malloc_error(char *bf_code)
{
 	if (bf_code == NULL)
	{	perror("Memory allocation error!\n");
		exit(EXIT_FAILURE);
	}
}
