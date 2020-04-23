#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z;
clrscr();
printf("Enter the value of x \n");
scanf("%d",&x);
printf("Enter the value of y \n");
scanf("%d",&y);
z=x>y?(x+y):(x-y);
printf("Result is %d",z);
getch();
}
