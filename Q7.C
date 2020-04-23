#include<stdio.h>
#include<conio.h>
#include<string.h>
void input();
void sort(char [25][25],int);
int i,j,n;
char str[25][25],temp[25];
void main()
{
	clrscr();
	input();
	sort(str,n);
	getch();
}
void input()
{
	printf("Enter number of strings you want to sort : ");
	scanf("%d",&n);
	printf("Enter strings : ");
	for(i=0;i<=n;i++)
	{
		gets(str[i]);
	}
}
void sort(char str[25][25],int n)
{
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strcmp(str[i],str[j]) > 0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("Sorted strings : ");
	for(i=0;i<=n;i++)
	{
		puts(str[i]);
	}
}