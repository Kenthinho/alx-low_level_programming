#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: delimeter
 * @n: n args
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int s;
	char *clone;

	va_start(arguments, n);

	for (s = 0; s < n; s++)
	{
		clone = va_arg(arguments, char*);
		if (clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if (seperator != NULL && s < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(arguments);
}
