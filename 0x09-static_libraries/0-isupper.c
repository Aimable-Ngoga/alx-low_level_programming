#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: Else returns 0 or Nor the highercase returns  1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

