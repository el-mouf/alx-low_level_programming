#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: No return
 */

void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			for (n = 0; n <= 5; n++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (i >= 2 && j >= 4)
						break;
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(58);
					_putchar(n + 48);
					_putchar(m + 48);
					_putchar('\n');
				}
			}
		}
	}
}
