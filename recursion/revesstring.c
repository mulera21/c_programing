#include <string.h>
#include <stdio.h>

void printr(char *str)
{
	char len = strlen(str);

	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c\n", str[i]);
	}

}
int main ()
{
	char *nice = "hello world";

	printr(nice);
	return 0;
}
