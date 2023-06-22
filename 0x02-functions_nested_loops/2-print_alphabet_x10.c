#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for(j = 1; i <= 10; j++)
	{
		for (j = 97; j<= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
