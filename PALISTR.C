#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char ch[10],comp;
int i=0,j,flag;
clrscr();
printf("Enter the string : ");
scanf("%s",&ch);
j=strlen(ch)-1;
while(i<=j)
{
	if(ch[i]==ch[j])
		flag=1;
	else
	{
		flag=0;
		break;
	}
	i++;
	j--;
}
	if(flag==1)
		printf("Palindrome");
	else
		printf("Not palindrome");
getch();
}