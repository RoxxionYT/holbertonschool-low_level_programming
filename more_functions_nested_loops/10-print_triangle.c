#include "main.h"

/**
 * print_triangle - Draws a triangle
 *
 * @n: int
 * Return: void
 */
void print_triangle(int n)
{
	int times;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (times = 0; times < n; times++)
	{
		for (z = 0; z < (n + times); z++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
    }
}
