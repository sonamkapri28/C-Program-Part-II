#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,n,sum=0,product=1;
clrscr();
printf("Enter the limit \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
		sum=sum+a[i];
	}
	else
	{
		product=product*a[i];
	}
}
printf("Sum of even numbers is %d \n",sum);
printf("Product of odd numbers is %d",product);
getch();
}

