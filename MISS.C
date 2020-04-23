#include<stdio.h>
#include<conio.h>
main()
{
int n,m,i,a[10],b[10],sum1=0,sum2=0,miss;
clrscr();
printf("Enter limit of first array");
scanf("%d",&n);
printf("Enter array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	sum1=sum1+a[i];
}
printf("Enter limit of second array");
scanf("%d",&m);
printf("Enter array");
for(i=0;i<m;i++)
{
	scanf("%d",&b[i]);
	sum2=sum2+b[i];
}
miss=sum1-sum2;
printf("Missing element in second array is %d",miss);
getch();
}
