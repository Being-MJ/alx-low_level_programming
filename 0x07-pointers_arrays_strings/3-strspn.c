#include "main.h"

/**
 * main - gets the length of a prefix substring
 * @n: number of bytes in the initial segment
 * @s: the first string
 * @accept: the second string
 *
 * Return: k
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; acceppt[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (k);
}
