#include <stdio.h>
/**
 * main - returns the combination of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ones = 0;
	int tens = 0;

	for (tens = '0'; tens <= '0'; tens++)/*prints tens digits*/
	{
		for (ones = '0'; ones <= '0'; ones++)/*print ones digits*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

