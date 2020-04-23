#include<conio.h>
#include<stdio.h>
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	printf("Insertion Done \n");
}
void deletee()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("Queue is Empty");
	}
	else
	{
		temp=front;
		front=front->next;
		printf("Deleted element : %d",temp->data);
		free(temp);
	}
}
void display()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("Queue is Empty");
	}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void main()
{
	int choice,value;
	char ch;
	clrscr();
	do
	{
		printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n");
		printf("Enter the choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element : ");
				scanf("%d",&value);
				insert(value);
				break;
			case 2: deletee();
				break;
			case 3: display();
				break;
			case 4: exit();
				break;
			default:printf("Invalid choice");
				break;
		}
		printf("Do u want to continue [y/n] ? ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y');
	getch();
}