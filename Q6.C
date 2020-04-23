#include<stdio.h>
#include<conio.h>
#include<String.h>
void input();
void sorting(char []);
char ch[10];
int choice,i,j;
void main()
{
	clrscr();
	printf("1.Take input \n2.Sorting \n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:input();
		case 2:sorting(ch);
			break;
		default:printf("Invalid Choice");
			break;
	}
	getch();
}
void input()
{
	printf("Enter String : ");
	fflush(stdin);
	gets(ch);
}
void sorting(char ch[])
{
	int len;
	char t;
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(ch[i]>ch[j])
			{
				t=ch[i];
				ch[i]=ch[j];
				ch[j]=t;
			}
		}
	}
	printf("Sorted String : ");
	puts(ch);
}
