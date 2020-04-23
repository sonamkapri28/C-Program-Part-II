#include<stdio.h>
#include<conio.h>
main()
{
char ch[10],*p;
clrscr();
printf("Enter string ");
gets(ch);
p=&ch[0];
while(*p!='\0')
{
	printf("%u ",p);
	printf("%c\n",*p);
	p++;
}
getch();
}