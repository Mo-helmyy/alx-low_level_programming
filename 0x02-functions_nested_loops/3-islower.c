#include "main.h"

/**
 * _islower - function to check if
 *	charcter is lowercase
 *
 * @C: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *	otherwise always 0 (Success)
*/

int _islower(int C)
{
	if (C >= 97 && C <= 122)
		return (1);
	return (0);
}
