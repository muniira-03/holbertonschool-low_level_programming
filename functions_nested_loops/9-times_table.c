#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Add an extra space for single-digit numbers */
				if (result < 10)
					_putchar(' ');

				/* Print the result correctly */
				if (result >= 10)
				{
					_putchar((result / 10) + '0'); /* First digit */
					_putchar((result % 10) + '0'); /* Second digit */
				}
				else
				{
					_putchar(result + '0'); /* Single-digit numbers */
				}
			}
		}
		_putchar('\n');
	}
}
