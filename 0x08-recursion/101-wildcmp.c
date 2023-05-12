#include "main.h"
#ifndef WILDCMP_H
/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: the first string to compare
 * @s2: the second string to compare (may contain the wildcard character *)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0') /* wildcard matches any string */
		return 1;
		while (*s1 != '\0')
	{
		if (wildcmp(s1, s2 + 1)) /* check if wildcard matches the rest of s1 */
		return 1;
		 s1++;
	}
		return 0;
	}
	if (*s1 == '\0') /* s1 is empty but s2 is not */
		return (*s2 == '\0');
	if (*s1 == *s2 || *s2 == '?') /* normal character or wildcard match */
		return wildcmp(s1 + 1, s2 + 1);
	return 0; /* no match */
}
}
