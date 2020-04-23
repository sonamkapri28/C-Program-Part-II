#include<stdio.h>
#include<conio.h>
#include<limits.h>
main()
{
int a[10],i,n,first,second;
clrscr();
printf("Enter the limit of an array \n");
scanf("%d",&n);
printf("Enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=second=INT_MIN;
for(i=0;i<n;i++)
{
	if(a[i]>first)
	{
		second=first;
		first=a[i];
	}
	else if(a[i]>second && a[i]<first)
	{
		second=a[i];
	}
}
printf("Second largest number is %d",second);
getch();
}