#include "bf.h"
#include <stdio.h>

bool integer_option = false;

/**
 * main - the main function of the program
 * @argc: number of arguments passed
 * @argv: the vector of the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int index;
	char *bf_code;
	const char *filename = argv[argc - 1];

	if (argc < 2 || argc > 4)
		argument_error(argc, argv);


	/* parsing of the instructions */
	for (index = 0; index < argc; index++)
	{
		if (!strcmp(argv[index], "-n"))
			integer_option = true;
	}


	process_file(filename, &bf_code);
	if (bf_code != NULL)
	{
		interpret_instruction(bf_code);
		free(bf_code);
	}
	return (0);
}
