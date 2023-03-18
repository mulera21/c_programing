#include <stdio.h>
/**
 * main - prints multiplication table
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 3;
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		printf("%d X %d = %d\n", n, i, n*i);
	}
	return (0);

}
