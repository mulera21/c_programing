#include <stdio.h>

int display(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * display(n - 1);
	}
}

int main()
{
	int n = 10;
	
	int results = display(n);
	printf("%d = %d\n", n, results);
}

