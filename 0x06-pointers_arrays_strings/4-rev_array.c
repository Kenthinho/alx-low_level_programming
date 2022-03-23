#include "main.h"

/**
 * reverse_array - reverses the array param
 * @a: pointer to first int param
 * @n: pointer to second int param
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
