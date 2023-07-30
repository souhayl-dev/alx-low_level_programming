#include "main.h"

/**
* _isalpha - check character is it lowercase or not.
* @c: character to check
* Return: 1 if c is letter, 0 if is not.
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
