#include<stdio.h>
#include<conio.h>
main()
{
int gross_salary,salary,basic,da,hr,it=500;
clrscr();
printf("Enter the basic salary \n");
scanf("%d",&basic);
da=(10*basic)/100;
hr=(5*basic)/100;
gross_salary=basic+da+hr;
salary=gross_salary-it;
printf("Gross Salary is %d \n",gross_salary);
printf("Salary after income tax is %d ",salary);
getch();
}