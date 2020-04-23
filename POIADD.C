#include<stdio.h>
#include<conio.h>
main()
{
int a[5],*p,n,i;
clrscr();
printf("Enter element ");
scanf("%d",&n);
printf("Enter array ");
p=&a[0];
for(i=0;i<n;i++)
{
	scanf("%d",p+i);
}
printf("Array is : ");
for(i=0;i<n;i++)
{
	printf("%d\t",*(p+i));
	printf("%u\n",(p+i));
}
getch();
}