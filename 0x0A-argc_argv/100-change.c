#include <stdlib.h>
#include <stdio.h>

int count_coins(int cents);

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		coins = count_coins(cents);
		printf("%d\n", coins);
		return (0);
	}
}

/**
 * count_coins - a function that counts minimum number
 * of coins to make change for an amount of money
 * @cents: amount of cents
 *
 * Return: minimum number of coins
 */

int count_coins(int cents)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int coin_num = 0;

	while (cents > 0)
	{
		int i;

		for (i = 0; i < 5; i++)
		{
			if (coins[i] <= cents)
			{
				cents -= coins[i];
				coin_num++;
			}
		}
	}

	return (coin_num);
}
