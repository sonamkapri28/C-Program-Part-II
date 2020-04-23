#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
FILE *fp;
char ch[10];
clrscr();
fp=fopen("f2.txt","r");
if(fp==NULL)
{
	printf("Not found");
}
else
{
fgets(ch,10,fp);
}
//strrev(ch);
strupr(ch);
printf("String reverse %s",(ch));
fclose(fp);
getch();
}

