#include<stdio.h>
#include<conio.h>
main()
{
int n,rem,product=1;
clrscr();
printf("Enter the no");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	product=product*rem;
	n=n/10;
}
printf("Product of a number = %d",product);
getch();
}