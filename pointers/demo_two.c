#include <stdio.h>
/* addition of pointers*/

int main()
{
	int a = 3;
	int b = 4;
	int sum =0;

	int *i_ptr = &a;
	int *b_ptr = &b;
	int *s_ptr = &sum;

	*s_ptr = *i_ptr * *b_ptr;

	printf("the sum is %d\n:", *s_ptr);

	return (0);
}
