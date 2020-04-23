#include<stdio.h>
#include<conio.h>
main()
{
char a[10], search;
int i ,n;
clrscr();
printf("Enter the string \n");
gets(a);
printf("Enter the element which you want to search \n");
scanf("%c",&search);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]==search)
	{
		printf("Element is found at position %d \n",i);
		break;
	}
	if(i==(strlen(a)-1))
	{
	printf("Element is not found");
	}

}
getch();
}
