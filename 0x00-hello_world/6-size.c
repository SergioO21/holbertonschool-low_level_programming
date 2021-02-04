/**
* sizeof: calculate size of a especific type of data
* printf: Print what you write
* %d: reference to a int number
*/

#include <stdio.h>

/*
* Starting point of the program
*/ int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an init: %lu byte(s)\n", sizeof(int));
	printf("Size of a long init: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
