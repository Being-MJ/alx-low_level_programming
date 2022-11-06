#include <stdio.h>

/**
 *  main- prints the number of arguments passed into it
 *  @argc: argument count
 *  @argv: argument vector
 *  Return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != 0)
	{
		printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
