#include <stdio.h>

/**
  * main- prints all lowercase alphabets and uppper
  * Return: returns exit code (0)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
