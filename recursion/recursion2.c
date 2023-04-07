#include <stdio.h>

int printtwo(int n)
{

	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * printtwo(n - 1);
	}
}

int main()
{
	int n = 7;

	int resluts = printtwo(n);
	printf("%d=%d\n", n, resluts);
	return 0;
}
