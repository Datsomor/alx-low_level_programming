#include "main.h"
/**
 * print_times_table - Print the times table up to a given value.
 * @n: The number up to which the times table will be printed.
 *
 * This function prints the times table from 0 to 'n'. It generates
 * the multiplication table for each value from 0 to 'n' and formats
 * the output to align the numbers neatly.
 *
 * Note: The function assumes 'n' is within the range of 0 to 15.
 *
 */
void print_times_table(int n)
{
	{
		int i, j, k;
		if (n >= 0 && n <= 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					k = j * i;
					if (j == 0)
					{
						_putchar(k + '0');
					} else if (k < 10 && j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					} else if (k >= 10 && k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					} else if (k >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
