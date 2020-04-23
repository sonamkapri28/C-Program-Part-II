#include<stdio.h>
#include<conio.h>
main()
{
int a[10],b[10],c[10];
int n,i;
clrscr();
printf("Enter limit of first array ");
scanf("%d",&n);
printf("Enter first array : ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter second array : ");
for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
printf("The dot product is ");
for(i=0;i<n;i++)
{
	c[i]=a[i]*b[i];
	printf("%d ",c[i]);
}
getch();
}