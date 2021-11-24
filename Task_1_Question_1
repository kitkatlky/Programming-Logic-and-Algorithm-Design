/*Given an integer number in seconds as input, print the equivalent time in hours, minutes, and seconds as output. The recommended output format is something like:
7,322 seconds is equivalent to 2 hours 2 minutes 2 seconds.*/


#include<stdio.h>

int main()
{
	int time,hours,minutes,seconds;
	int remained_time;
	printf("Enter your time in second:\n");
	scanf("%d",&time);
	
	
	hours=time/3600;
	remained_time=time-hours*3600;
	
	minutes=remained_time/60;
	remained_time-=minutes*60;
	
	seconds=remained_time;
	printf("\n%d seconds is equivalent to %d hours ",time,hours);
	printf("%d minutes %d seconds",minutes,seconds);
	
	return 1;
}
