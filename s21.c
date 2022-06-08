#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *temp;
};
struct node *head=NULL,*pos=NULL,*tail=NULL;
struct node *temp;
void push()
{
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int entry;
	printf("enter value\n");
	scanf("%d",&entry);
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->data=entry;
		pos=head;
		tail=head;
	}
	else
	{
		tail->next=(struct node*)malloc(sizeof(struct node));
		tail=tail->next;
		tail->data=entry;
		printf(" pushed is %d\n",tail->data);
	}
}
void pop()
{
	int i,entry;
	
	struct node *head=NULL;
	struct node *temp;
	temp=head;
	printf("enter position\n");
	scanf("%d",&entry);
	if(isempty())
	{
		if(head==NULL)
		{
			printf("undeflow\n");
		}
	}
	else
	{
		if(entry==0)
		{
			head=head->next;
			temp->next=NULL;
			free(temp);
		}else
		{	
			for(i=0;i<(entry-1);i++)
			{
				temp=temp->next;
			}
			struct node *del=temp->next;
			temp->next=temp->next->next;
			del->next=NULL;
			free(del);
		}
	}
}

int isempty()
{
	struct node *head=NULL;
	if(head==NULL)
	{
		return 1;
	}
	else
	{	
		return 0;
	}
}
void findtop()
{
	struct node *tail=NULL;
	printf("top is %d",tail);
	printf("top value is %d",tail->data);
}
void display()
{
		if(tail==NULL)
		{
			printf("Stack Underflow\n");
		}
		else
		{
			struct node *temp=tail;
			while(temp->next!=NULL)
			{	
				printf("\n |\t%d\t|",temp->data);
				temp=temp->next;
			}
			printf("\n |\t%d\t|\n",temp->data);
			printf(" ________________");
		}
}	
void main()
{
	while(1)
	{	
		int ch;
		printf("1.push\t2.pop\t3.display\t4.find top\t5.exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				findtop();
				break;
			}
			case 5:
			{
				exit(0);
			}
		}
	}
}	
	

