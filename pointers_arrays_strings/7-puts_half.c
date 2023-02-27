#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: *char
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half = len / 2;
	int i = 0;

	for (; *str; str++)
		len++;

	if (len % 2 == 0)
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
	{
		printf("%c",str[i]);
	}

	_putchar('\n');
}
