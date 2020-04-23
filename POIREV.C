#include<stdio.h>
#include<conio.h>
#define MAX 30
main()
{
int i,n,a[MAX];
int *p;
clrscr();
p=&a[0];
printf("Enter limit of array");
scanf("%d",&n);
printf("Emter array elements : ");
for(i=0;i<n;i++)
{
	scanf("%d",p);
	p++;
}
p=&a[n-1];
printf("Revered array using pointer is : ");
for(i=n-1;i>=0;i--)
{
	printf("%d\t",*p);
	p--;
}
getch();
}