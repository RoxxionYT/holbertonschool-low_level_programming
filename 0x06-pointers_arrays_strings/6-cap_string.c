#include "main.h"

int is_separator(char);

/**
 * cap_string - Capitalizes all words
 *
 * @s: *char
 * Return: *char
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap = 1;

	for (; s[i]; i++)
	{
		if (is_separator(s[i]))
		{
			cap = 1;
			continue;
		}

		if (cap)
		{
			cap = 0;

			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
	}
	return (s);
}

/**
 * is_separator - Checks for a separator
 *
 * @c: char
 * Return: bool
 */
int is_separator(char c)
{
	int i = 0;
	char s[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (; s[i]; i++)
		if (s[i] == c)
			return (1);

	return (0);
}
