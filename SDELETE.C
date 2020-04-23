#include<stdio.h>
#include<conio.h>
main()
{
char a[10],delete,b[10];
int n,i;
clrscr();
printf("Enter the string \n");
gets(a);
printf("Enter the character which you want to delete from string \n");
scanf("%c",&delete);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]!=delete)
	{
		b[i]=a[i];
	}

}
printf("New string after deletion is :");
for(i=0;b[i]!='\0';i++)
{       fflush(stdio);
	printf("%c",b[i]);
	b[i]='\0';
}
getch();
}