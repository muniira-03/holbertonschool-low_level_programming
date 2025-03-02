#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i;

    while (*s)  /* Loop through the string s */
    {
        /* Check if current character is in accept */
        for (i = 0; accept[i] != '\0'; i++)
        {
            if (*s == accept[i])  /* Match found */
            {
                count++;
                break;
            }
        }
        
        if (accept[i] == '\0')  /* If no match is found, break the loop */
        {
            break;
        }
        s++;
    }

    return (count);  /* Return the count of matching characters */
}
