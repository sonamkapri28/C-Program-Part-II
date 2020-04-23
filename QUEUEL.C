#include<stdio.h>
#include<conio.h>
#define MAX 3
int queue[MAX],front=-1,rear=-1;
void insert()
{
	int num;
	printf("Enter the value to be inserted : ");
	scanf("%d",&num);
	if(front==0 && rear==(MAX-1))
	{
		printf("Queue Overflow\n");
	}
	else if(front==-1 && rear==-1)
	{

		front++;
		rear++;
		queue[rear]=num;
	}
	else
	{
		rear++;
		queue[rear]=num;
	}

}
void deletee()
{
	int value;
	if(front==-1 || front>rear)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		value=queue[front];
		printf("Deleted value : %d",value);
	}
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
}
void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("The queue is : ");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
void main()
{
int choice;
char c;
clrscr();
do
{
printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n");
printf("Enter the choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
	break;
case 2:deletee();
	break;
case 3:display();
	break;
case 4:exit();
	break;
default:printf("Invalid choice");
	break;
}
printf("Do you want to continue y for yes and n for no : ");
fflush(stdin);
scanf("%c",&c);
}
while(c=='y');
getch();
}