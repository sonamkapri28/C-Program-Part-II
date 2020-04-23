#include<stdio.h>
#include<conio.h>
main()
{
int year;
clrscr();
printf("Enter the year \n");
scanf("%d",&year);
if(year%100==0)
{
	if(year%400==0)
		printf("Leap year");
	else
		printf("Non leap year");
}
else
{
	if(year%4==0)
		printf("Leap year");
	else
		printf("Non leap year");
}
getch();
}
