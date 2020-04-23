#include<stdio.h>
#include<conio.h>
main()
{
int base,exponent;
long float result=1;
clrscr();
printf("Enter the base number : ");
scanf("%d",&base);
printf("Enter the exponent number : ");
scanf("%d",&exponent);
while(exponent!=0)
{
	result=result*base;
	exponent--;
}
printf("Answer is %lf",result);
getch();
}