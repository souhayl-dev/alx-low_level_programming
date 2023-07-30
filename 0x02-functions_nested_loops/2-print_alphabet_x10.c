#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet from a-z 10 times.
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
