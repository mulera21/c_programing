#include <stdio.h>
/**
 * main - print A to Z except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (i == 'E' || i == 'Q')
		{
			continue;
		}
		if (i == 'q')
		{
			continue;
		}
		printf("%c\n", i);
	}
	return (0);
}
