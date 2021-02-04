/*
* write - is a system call that is used to write data out of a buffer.
* Syntaxis - (descriptor output , your message , number of characters it has)
*/

#include <unistd.h>

/*
* main: Starting point of the program
* return: Normal output
*/ int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
