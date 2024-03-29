#include "main.h"

/**
 * _strncat - concatenates two words
 * @dest: pointer to destination param
 * @src: pointer to source param
 * @n: int param
 * Return: *dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int m, i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
