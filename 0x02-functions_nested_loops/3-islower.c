#include "main.h"


/**
* _islower - Check main
* @c: An input character
* Description: function checks for lower case character
* Return: 1 if is lowercase or 0 if is uppercase
*/

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
