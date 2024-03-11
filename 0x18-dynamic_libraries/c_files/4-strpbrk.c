#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	/* Loop through the characters in the string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through the characters in the accept string */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* If a matching character is found, return a pointer to that character in s */
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	/* If no match is found, return NULL */
	return (NULL);
}
