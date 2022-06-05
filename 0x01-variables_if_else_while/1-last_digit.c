#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Prints a text according to last digit of number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is greater than 5", n);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is 0", n);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is less than 6 not 0", n);
	}
	printf("\n");

	return (0);
}
