#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char nm[10];
	int marks;
};
main()
{
struct student s;
int i,sum=0,average;
clrscr();
printf("Enter roll no : ");
scanf("%d",&s.roll);
printf("Enter name : ");
scanf("%s",s.nm);
printf("Enter marks in 5 subjects");
for(i=0;i<5;i++)
{
	scanf("%d",&s.marks);
	sum=sum+s.marks;
}
average=sum/5;
printf("Roll No : %d\n",s.roll);
printf("Name : %s\n",s.nm);
printf("Total marks : %d\n",sum);
printf("Average is : ");
if(average>80)
{
	printf("Grade A");
}
else
{
	printf("Grade B");
}
getch();
}

