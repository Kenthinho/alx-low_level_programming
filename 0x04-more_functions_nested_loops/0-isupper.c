#include "main.h"
#include <ctype.h>

/**
 * main - checks the argument for uppercase
 * @c: Returns 1 if in uppercase else otherwise 0
 * Return: Always 0(Success)
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
