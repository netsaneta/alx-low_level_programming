#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int x)
{
	int i, j;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < x; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
