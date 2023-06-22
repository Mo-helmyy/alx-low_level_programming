#include "main.h"

/**
 * _islapha - checks if character isa a letter
 *	both lowercase ot uppercase
 *
 * @C: takes input from other functions.
 *
 * Return: 1 is C if true else 0
*/

int _isalpha(int C);
{
	if (C >= 97 && C <= 122)
		return (1);
	if (C >= 65 && c <= 90)
		return (1);
	return (0);
}
