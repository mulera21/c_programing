#include <string.h>
#include <stdio.h>

int returnstring( char *str)
{
	int len = strlen(str);		
	return len; 

				
}

int main()
{
	char *message = "i love home";
	int len = returnstring(message);
	printf("the lenth of the string is %d\n", len);
	return 0;
}
