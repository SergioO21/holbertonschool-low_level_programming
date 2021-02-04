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
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an init: %d byte(s)\n", sizeof(int));
	printf("Size of a long init: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
