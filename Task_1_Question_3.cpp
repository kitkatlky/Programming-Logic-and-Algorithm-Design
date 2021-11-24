/*Print the range of a number. E.g. number 78 is between 70 and 79, 102 is
between 100 and 109. */

#include<stdio.h>

int main()
{
	int num,tens,a,b;
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	tens=num/10;
	a=tens*10;
	b=a-1+10;
	printf("\n%d is between %d and %d",num,a,b);
	
	return 1;
}
