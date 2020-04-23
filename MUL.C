#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,a[4][4],b[4][4],m[4][4],r1,r2,c1,c2;
clrscr();
printf("Enter the no of rows of first matrix \n");
scanf("%d",&r1);
printf("Enter the no of columns of first matrix \n");
scanf("%d",&c1);
printf("Enter element of first matrix \n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Enter the no of rows of second matrix \n");
scanf("%d",&r2);
printf("Enter the no of columns of second matrix \n");
scanf("%d",&c2);
printf("Enter elements of second matrix \n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		m[i][j]=0;
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		for(k=0;k<c1;k++)
		{
			m[i][j]+=a[i][k]*b[k][j];
		}
	}
}
printf("Multiplication of two matrix is \n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
	 printf("%d ",m[i][j]);
	}
	printf("\n");
}
getch();
}