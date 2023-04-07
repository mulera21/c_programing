#include <stdio.h>
void printstring(char *str)
{
	printf("%s\n", str);

}

int main()
{
	char *message = "hello, world";
	printstring(message);
	return 0;
}
