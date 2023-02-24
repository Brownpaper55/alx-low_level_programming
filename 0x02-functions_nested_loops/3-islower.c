#include "main.h"

/**
 * _islower - Checks for lower case characters
 * @c: The character to be checked
 * Return: 1 for lower case characters or 0 for anything else
 */

int is_lower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
