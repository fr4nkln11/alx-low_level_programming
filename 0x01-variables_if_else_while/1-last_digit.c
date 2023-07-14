#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Solution for the last digit"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit;

	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);

	if (n > 5)
	{
		printf(" and is greater than 5\n");
	} else if (n == 0)
	{
		printf(" and is 0\n");
	} else if (n < 6 && n != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
