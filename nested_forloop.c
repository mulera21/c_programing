#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main()
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = i; j > 0; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return (0);

}
