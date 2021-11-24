/*A program that prompts the user to enter the date as three integer values for the month, the day in the 
month, and the year. The program should then output the date in the form 31st December 2003 when the 
user enters, say 12 31 2010. The program has to work out when superscripts “th”, “nd”, “st”, and “rd” need 
to be appended to the day value. The programmer should not forget 1st, 2nd, 3rd, 4th; and then 11th, 
12th, 13th, 14th; and 21st, 22nd, 23rd, and 24th.*/

#include<stdio.h>
#include<string.h>

int main()
{
	int month,day,year,i;
	char month_names[12][10]={"January","February","March","April","May","June",
	"July","August","September","October","November","December"};
	char script[4][3]={"st","nd","rd","th"};
	
	printf("Enter month:\n");
	scanf("%d",&month);

	printf("Enter day:\n");
	scanf("%d",&day);
	
	/*list of condition to use 'st','nd','rd','th'*/
	if(day==1 or day==21 or day==31)
	{
		i=0;/*using superscript 'st'*/
	}
	else if (day==2 or day==22)
	{
		i=1;/*using superscript 'nd'*/
	}
	else if(day==3 or day==23)
	{
		i=2;/*using superscript 'rd'*/
	}
	else
	{
		i=3;/*using superscript 'th'*/
	}
	
	printf("Enter year:\n");
	scanf("%d",&year);
	
	printf("The date is %d%s  ",day,script[i]);
	printf("%s  %d",month_names[month-1],year);
	/*use (month-1) because array subscript start from 0*/
	
	return 0;
}
