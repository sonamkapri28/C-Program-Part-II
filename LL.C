#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void menu();
void create();
void display();
void insertatbeg();
void insertatend();
void insertatspecific();
void main()
{
	clrscr();
	menu();
	getch();
}
void menu()
{
	int choice;
	printf("1.create \n2.display \n3.insert at beg \n4.insert at end \n5.insert at specific position \n6.delete at beg \n7.delete at end \n8.delete at specific position \n");
	printf("Enter the choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:create();
		       break;
		case 2:display();
			break;
		case 3:insertatbeg();
			break;
		case 4:insertatend();
			break;
		case 5:insertatspecific();
			break;
		default:
			printf("Invalid choice");
			break;
	}
}
void create()
{
	struct node *newnode,*current;
	char ch;
	do
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter data ");
		scanf("%d",&newnode->data);
		if(start==NULL)   //ll is empty
		{
			start=newnode;   //address of 1st link list
			current=newnode;  //store address of 1st ll in other pointer
		}
		else  //when ll is not empty
		{
			current->next = newnode;
			current = newnode;
		}
		printf("Do u want to enter more node [y/n] ?\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch!='n');
	menu();
}
void display()
{
	struct node *newnode;
	newnode = start;
	while(newnode!=NULL)
	{
		printf("%d-->",newnode->data);
		newnode=newnode->next;
	}
	menu();
}
void insertatbeg()
{
	struct node *newnode,*current;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		current=newnode;
	}
	else
	{
		newnode->next=start;
		start=newnode;
	}
	menu();
}
void insertatend()
{
	struct node *newnode,*current,*tap;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		current=newnode;
	}
	else
	{
		tap=start;
		while(tap->next!=NULL)
		{
			tap=tap->next;
		}
		tap->next=newnode;
	}
	menu();
}
void insertatspecific()
{
	struct node *newnode,*current,*tep,*t1;
	int i,pos;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		current=newnode;
	}
	else
	{
		printf("Enter position ");
		scanf("%d",&pos);
		for(i=0;i<pos-1;i++)
		{
			t1=tep->next;
			tep->next=newnode;
			newnode->next=t1;
		}
	}
	menu();
}
