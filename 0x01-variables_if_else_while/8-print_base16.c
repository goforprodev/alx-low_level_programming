#include <stdio.h>

/**
  * main - print hexadecimal in base 16
  * Return: returns 0
 */
int main(void)
{
	char ch;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
