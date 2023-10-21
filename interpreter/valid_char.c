#include "bf.h"

/**
 * valid - function will check if a character is a valid one
 * all non-valid chars in brainf*ck are considered a comment
 * @c: the character input
 *
 * Return: True or false
 */
bool valid(char c)
{
        const char *valid_characters = "<>+-[],.";
        const char *current;

        current = valid_characters;
        for (; *current != '\0'; current++)
        {
                if (c == *current)
                        return (true);
        }
	return (false);
}
