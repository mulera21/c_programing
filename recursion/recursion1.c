#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	int n =5;
	int results = factorial(n);
	printf("%d = %d\n", n, results);
	return 0;
}
