#include "main.h"

/**
 * wildcmp - Compares two strings, considering '*' as a wildcard
 * @s1: First string to compare
 * @s2: Second string with possible wildcards ('*')
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If we reach the end of both strings, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* If s2 contains '*', try all possible matches */
	if (*s2 == '*')
	{
		/* Case 1: '*' matches zero characters in s1 */
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		/* Case 2: '*' matches one or more characters in s1 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	/* If characters match or s2 has no wildcard, continue comparing */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0); /* Return 0 if strings do not match */
}
