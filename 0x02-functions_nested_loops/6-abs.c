#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */

int _abs(int c)

{
	int abs_value;

	if (c < 0)
	{

	abs_value = c * -1;
	return (abs_value);

	}
	return (c);
}
