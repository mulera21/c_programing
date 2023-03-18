#include <stdio.h>
/**
 * main - Entry pint
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
		putchar("\n");
	}
	return (0);
}
