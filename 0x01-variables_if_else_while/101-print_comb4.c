#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, p, m;

	for (i = '0'; i <= '9'; i++)
	{
		for (p = '1'; p <= '9'; p++)
		{
			for (m = '2'; m <= '9'; m++)
			{
				putchar(i + '0');
				putchar(p + '0');
				putchar(m + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

