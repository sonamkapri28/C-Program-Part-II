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
else
{
printf("Non-Negative no");
}
getch();
}