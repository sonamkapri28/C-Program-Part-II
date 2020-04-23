#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[4][4],r,c,sum=0;
clrscr();
printf("Enter the no of rows  \n");
scanf("%d",&r);
printf("Enter the no of columns \n");
scanf("%d",&c);
printf("Enter the elements \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		sum=sum+a[i][j];
	}
	printf("Sum of %d rows is : %d \n",i,sum);
	sum=0;
}
for(j=0;j<c;j++)
{
	for(i=0;i<r;i++)
	{
		sum=sum+a[i][j];
	}
	printf("Sum of %d columns is : %d \n",i,sum);
	sum=0;
}
getch();
}
