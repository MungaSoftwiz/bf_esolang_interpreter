#include "bf.h"

/**
 * process_file - function processes the file & gets size
 * @bf_code: the code read from the file
 *
 * Return: a string of the processed brainf*ck code
 */

void process_file(const char *filename, char **bf_code)
{
	FILE *fp;
	int index;
	char c;
	long size = INITIAL_SIZE;


	(*bf_code) = calloc(size + 1, sizeof(char));
	if (*bf_code == NULL)
		malloc_error(*bf_code);

	if ((fp = fopen(filename, "r")) == NULL)
	{
                printf("File '%s' cannot be opened\n", filename);
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0L, SEEK_END);
	size = ftell(fp);
	rewind(fp);

	while ((c = fgetc(fp)) != EOF)
	{
		if (valid(c))
		{
			(*bf_code)[index] = c;
			index++;
		}
	}
	(*bf_code) = realloc(*bf_code, index + 2);
	(*bf_code)[index + 1] = '\0';

	fclose(fp);

}

/**
 * interpret_instructions - function interprets code from the file
 * @code: the code to be interpreted
 */
void interpret_instruction(char *code)
{
	int arr[CELL_SIZE] = {0};
	int open_loop = 0, close_loop = 0;
	int *mem_ptr = arr;
	const char *instruction;

	printf("Interpreting code:\n");
	instruction = code;
	for (; *instruction != '\0'; instruction++)
	{
		switch(*instruction)
		{
			case '>':
				mem_ptr++;
				break;
			case '<':
				mem_ptr--;
				break;
			case '+':
				(*mem_ptr)++;
				break;
			case '-':
				(*mem_ptr)--;
				break;
			case '.':
				if (integer_option)
					printf("%d", *mem_ptr);
				else
					printf("%c", *mem_ptr);
				break;
			case ',':
				scanf("%d", mem_ptr);
				break;
			case '[':
				if (!*mem_ptr)
					open_loop = 1;
				while (open_loop)
				{
					instruction++;
					if (*instruction == '[')
						open_loop++;
					else if (*instruction == ']')
						open_loop--;
				}
				break;
			case ']':
				if (*mem_ptr)
					close_loop = 1;
				while(close_loop)
				{
					instruction--;
					if (*instruction == '[')
						close_loop--;
					else if (*instruction == ']')
						close_loop++;
				}
				break;
			default:
				break;
		}
	}
}
