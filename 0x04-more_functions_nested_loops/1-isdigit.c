#include "main.h"
/**
 * _isdigit - checks if a character is digit
 *@x: the number to be checked
 * Return: return 1 for a digit else 0
 */
int  _isdigit(int x)
{

	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
