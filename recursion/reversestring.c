#include <string.h>
#include <stdio.h>

void printreverse(char *str)
{
	int len = strlen(str);

	int i;

	for (i = len -1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

int main()
{
	char *like = "love,programin";
	printreverse(like);
	return 0;
}
