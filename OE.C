#include<stdio.h>
#include<conio.h>
main()
{
int n;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
if(n%2==0)
printf("Even number");
else
printf("Odd number");
getch();
}