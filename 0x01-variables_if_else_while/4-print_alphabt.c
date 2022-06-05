#include <stdio.h>

/**
 * main - Prints some letters of the alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c !='e' && c != 'q')
		{
			putchar(c);
		}
	}

	put char('\n');

	return (0);
}
