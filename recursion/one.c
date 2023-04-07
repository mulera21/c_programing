#include <stdio.h>

int fun(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if ( n == 1)
	{
		return 1;
	}
	return fun (n -1) + fun (n - 2);

}

int main()
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d\n", fun(n));
	}
	return 0;
}
