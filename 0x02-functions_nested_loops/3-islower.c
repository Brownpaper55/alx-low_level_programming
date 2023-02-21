#include "main.h"

/**
 * is_lower - check for lower case character
 * @c: The character to be checked
 *
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
