#include<stdio.h>
#include<conio.h>
main()
{
int n,bin=0,rem,i=1;
clrscr();
printf("Enter decimal number");
scanf("%d",&n);
while(n!=0)
{
	rem=n%2;
	n=n/2;
	bin=bin+rem*i;
	i=i*10;
}
printf("Binary number : %d",bin);
getch();
}
