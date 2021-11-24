/*If a four digit number is input through the keyboard, write a program to
obtain the sum of the first and last digit of the number.*/

#include<stdio.h>

int main()
{
	int num,num_1,num_2,num_3,num_4,sum;
	printf("Enter your number in four digit:\n");
	scanf("%4d",&num);
	
	num_1=num/1000;
	num_2=(num-num_1*1000)/100;
	num_3=(num-num_1*1000-num_2*100)/10;
	num_4=num-num_1*1000-num_2*100-num_3*10;
	sum=num_1+num_4;
	printf("\nThe sum of first and last digit of %d are %d",num,sum);
	
	return 1;
}
