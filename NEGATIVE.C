#include<stdio.h>
#include<conio.h>
main()
{
int n;
clrscr();
printf("Enter a no");
scanf("%d",&n);
if(n<0)
{
printf("Negative no");
}
if(n>=0)
{
printf("Non-Negative no");
}
getch();
}