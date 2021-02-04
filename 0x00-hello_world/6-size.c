/*
* sizeof: calculate size of a especific type of data
* printf: Print what you write
* %d: reference to a int number
*/

#include <stdio.h>

/*
* Starting point of the program
*/ int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an init: %zu byte(s)\n", sizeof(int));
	printf("Size of a long init: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));

	return (0);
}
