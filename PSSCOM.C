#include<stdio.h>
#include<conio.h>
main(int argc , char * argv[])
{
int i,sum=0;
clrscr();
for(i=0;i<argc;i++)
{
sum=sum+atoi(argv[i]);
}
printf("Sum is %d",sum);
getch();
}