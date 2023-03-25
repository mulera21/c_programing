#include <stdio.h>
/**
 * electriciy bill calculator
 */
int main()
{
	int unit;
	int bill;

	printf("please enter electric unit:");
	scanf("%d\n", &unit);

	if (unit <= 100)
	{
		bill = unit * 3;
	}
	else
	{
		bill = unit * 5;
	
	}
	printf("bill amount is:%d", bill);
	 
}
