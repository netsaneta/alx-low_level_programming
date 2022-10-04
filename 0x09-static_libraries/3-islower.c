#include "main.h"

/**
 * _islower - code
 * @c: An input character
 * Description: function that checks for lowercase character
 * Return: 1 if is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
