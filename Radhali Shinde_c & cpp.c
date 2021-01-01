#include<stdio.h>
#include<stdlib.h>

int GetFirstWeekDay(int year)
{
	int Day;
	Day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;//this will find the day of the week for january 1,where sunday is 0 and saturday is 6
    return Day;
}

int main()
{
	system("color 1F");//FOR CHANGING BACKROUND COLOR AND TEXT COLOR ON CONSOLE SCREEN and also this'system' function in include in "#include<stdlib.h>" headerfile	
	int year,month,day,DaysInMonth,weekdays=0,startingday;
	printf("\nEnter the year you want: ");
	scanf("%d",&year);
	
	char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int MonthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((year%4==0&&year%100!=0)||year%400==0)
	MonthDays[1]=29;//it is the case for leap year
	
	startingday=GetFirstWeekDay(year);
	for(month=0;month<12;month++)
	{
		DaysInMonth=MonthDays[month];
		printf("\n\n-----------------%s-----------------\n",months[month]);
		printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
	    for(weekdays=0;weekdays<startingday;weekdays++)
	    printf("     ");
	for(day=1;day<=DaysInMonth;day++)
	{
		printf("%5d",day);//5 for spacing between two consecutive numbers (we can also call it padding)
		if(++weekdays>6)
		{
			printf("\n");
			weekdays=0;
		}
		startingday=weekdays;
	}
	
	}
}
