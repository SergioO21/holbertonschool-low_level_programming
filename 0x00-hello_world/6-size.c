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
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an init: %d byte(s)\n", sizeof(intType));
	printf("Size of a long init: %d byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
