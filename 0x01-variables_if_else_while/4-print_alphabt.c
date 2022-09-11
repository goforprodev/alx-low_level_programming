#include <stdio.h>

/**
  * main- prints all lowercase alphabets excluding q and e
  * Return: returns exit code (0)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
