#include <stdio.h>
/**
 * main - input from the user
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	int i;

	printf("enter a number\n");

	scanf("%d", &n);

	for (i = 0 ; i <= 10 ; i++)
	{
		printf("%d X %d = %d\n", n, i, n * i);
	}


}
