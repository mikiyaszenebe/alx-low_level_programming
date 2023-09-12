#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints the name of the current source file.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the name of the current source file using the __FILE__ macro */
	printf("This program is in file: %s\n", __FILE__);
	return (0);
}
