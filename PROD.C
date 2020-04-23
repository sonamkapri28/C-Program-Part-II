#include<stdio.h>
#include<conio.h>
main()
{
int n,rem,product;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
for (product=1;n>0;n=n/10)
{
 rem=n%10;
 product=product*rem;
}
printf("Product of digits is %d ",product);
getch();
}