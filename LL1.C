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
void deleteatbeg();
void count();
void main()
{
	clrscr();
	menu();
	getch();
}
void menu()
{
	int choice;
	printf("\n1.Create \n2.Display \n3.Insert at beg \n4.Insert at end \n5.Insert at specific position \n6.Delete at beg \n7.Count \n8.Exit");
	printf("\nEnter the choice ");
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
		case 6:deleteatbeg();
			break;
		case 7:count();
			break;
		case 8:exit();
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
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
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
	struct node *newnode,*tap;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
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
	struct node *newnode,*temp=start;
	int i,pos;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		printf("Enter position ");
		scanf("%d",&pos);
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
			newnode->next=temp->next;
			temp->next=newnode;
	}
	menu();
}
void deleteatbeg()
{
	struct node *temp;
	int n;
	do
	{
		temp=start;
		printf("Deleted element : %d",temp->data);
		start=temp->next;
		free(temp);
		printf("Enter 1 to delete more nodes ");
		scanf("%d",&n);
	}
	while(n==1);
	menu();
}
void count()
{
	struct node *q=start;
	int count=0;
	while(q!=NULL)
	{
		q=q->next;
		count++;
	}
	printf("Number of elements are %d \n",count);
	menu();
}