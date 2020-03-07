#include<stdio.h>
void main()
{
	int days,month,year,week,nday,b;
	printf("Enter the number of days \n");
	scanf("%d",&days);
	b=days;
	year=days/365;
	nday=days%365;
	month=nday/30;
	nday=nday%30;
	week=nday/7;
	nday=nday%7;
	days=nday;
	printf("%d days= Year=%d Month=%d Week=%d Days=%d",b,year,month,week,days);
}
