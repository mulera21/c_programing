#include <stdio.h>

void printstng( char *like)
{
	printf("%s\n", like);
}
int main()
{
	char * message = "recussive";
	printstng(message);
	return 0;
}
