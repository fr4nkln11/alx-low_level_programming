#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Solution for
 * Positive anything is better than negative nothing"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive");
	} else if (n == 0)
	{
		printf("zero");
	} else if (n < 0)
	{
		printf("negative");
	}

	printf("\n");

	return (0);
}
