#include<stdio.h>
#include<conio.h>
struct stud
{
	int roll;
	char nm[10];
};
main()
{
struct stud s1;
struct stud *p=&s1;
clrscr();
p->roll=25;
strcpy(p->nm,"abc");
printf("Roll No : %d\n",p->roll);
printf("Name : %s",p->nm);
getch();
}