#include <stdio.h>

int main()
{
	int i = 3;
	float n = 34.55;
	char j = 'A';

	int *i_ptr = &i;

	float *n_ptr = &n;

	char *j_ptr = &j;

	printf("%d\n,%f\n,%c\n", *i_ptr, *n_ptr, *j_ptr);

	return (0);
}
