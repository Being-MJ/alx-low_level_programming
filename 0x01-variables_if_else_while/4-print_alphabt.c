#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * follwed by a new line, except q and e
 * Return: Always 0 (if sucessful)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'a')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
