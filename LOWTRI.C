#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[3][3],flag=1;
clrscr();
printf("Enter the elements  \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(a[i] < a[j] && a[j][i]==0)
		{
			flag=flag+1;
			break;
		}
	}
}
if(flag==3)
printf("Low triangle matrix");
else
printf("Not low triangle matrix");
getch();
}
