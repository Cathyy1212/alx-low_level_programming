#include "main.h"
/**
 * int_islower - shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 * @c: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}

