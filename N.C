#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("Enter limit : ");
scanf("%d",&n);
for(i=1;i<n;i=i+2)
{
	printf("%d + ",i);
	sum=sum+i;
}
printf("%d\n",n);
printf("Sum =%d",sum+n);
getch();
}
