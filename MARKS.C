#include<stdio.h>
#include<conio.h>
main()
{
int m,e,h,s,c;
float t,p,a;
clrscr();
printf("Enter the marks of maths , english , hindi , science , computer \n");
scanf("%d%d%d%d%d",&m,&e,&h,&s,&c);
t=m+e+h+s+c;
p=t/500*100;
a=t/5;
printf("Total marks %f \n",t);
printf("Percentage is %f \n",p);
printf("Average is %f",a);
getch();
}