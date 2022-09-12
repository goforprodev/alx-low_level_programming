#include <stdio.h>

/**
  * main- prints combination of 3 diff num
  * Return: returns 0
 */

int main(void)
{
	int n, x, y;

	for (n = '0'; n <= '7'; n++)
	{
		for (x = n + 1; x <= '8'; x++)
		{
			for (y = x + 1; y <= '9'; y++)
			{
				putchar(n);
				putchar(x);
				putchar(y);

				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

