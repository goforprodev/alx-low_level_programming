#include <unistd.h>
#include <string.h>

/**
  * main- prints a text
  * Return: returns 1 (success)
*/

int main(void)
{
	char my_string[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";
	write(2, my_string, strlen(my_string));
	return (1);
}
