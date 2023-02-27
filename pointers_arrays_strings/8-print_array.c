#include "main.h"

/**
 * print_array - Prints n elements of an array of int
 *
 * @a: *int
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 1;

	for (; *a; a++)
	{
		printf("%d", *a);

		if (count != n)
		{
			printf(", ");
		}
		else
		{
			break;
		}

		count++;
	}
	_putchar('\n');
}