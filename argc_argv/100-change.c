#include <stdio.h>
#include <stdlib.h>

/**
 * get_minimum_coins - calculates the minimum number of coins
 * @cents: the amount of cents
 *
 * Return: the minimum number of coins
 */
int get_minimum_coins(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	return (coins);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = get_minimum_coins(cents);

	printf("%d\n", coins);
	return (0);
}
