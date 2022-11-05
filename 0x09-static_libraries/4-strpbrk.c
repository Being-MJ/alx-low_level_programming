#include "main.h"

/**
 * main - searches a string for any of a set of bytes
 * _strpbrk(): function that locates the first occurence in the string
 * @s: the first string
 * @accept: the second string
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
