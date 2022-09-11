#include <stdio.h>

/**
  * main- prints all lowercase alphabets
  * Return: returns exit code (0)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
