#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* main: Starting point of the program
* return (0): Standart output
* f: Take a last digit of "n"
*/ int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;

	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, f);
	}

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, f);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f);
	}

	return (0);
}
