#include "main.h"

/**
* swap_int - prints all natural numbers from n t0 98
*@a: pointer to the first number
*@b: pointer to the second number
* Return: returns 0
*/

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
