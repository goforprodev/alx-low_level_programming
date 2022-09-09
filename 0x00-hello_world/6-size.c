#include <stdio.h>

/**
  * main- Prints sizes of various types
  * Return: returns 0
*/

int main(void)
{
	char A;
  	int num;
  	long int long_num;
  	long long int ll_num;
  	float deci;

  	printf("Size of a char: %lu byte(s)\n", sizeof(A));
 	printf("Size of a int: %lu byte(s)\n", sizeof(num));
 	printf("Size of a long int: %lu byte(s)\n", sizeof(long_num));
 	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll_num));
	printf("Size of a float: %lu byte(s)\n", sizeof(deci));
 	return (0);
}
