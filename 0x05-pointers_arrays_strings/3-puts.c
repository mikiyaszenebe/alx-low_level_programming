#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(*str++);
	}
		
}
