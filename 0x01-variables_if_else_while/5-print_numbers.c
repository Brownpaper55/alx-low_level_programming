#include <stdio.h>
/**
 * main - returns numbers from 0-9
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}
	putchar('\n');
	return (0);
}
