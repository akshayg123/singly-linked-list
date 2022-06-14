// polynomial addition by  using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coef,pow;
	struct node *next;
};
struct node *p1head,*p2head,*rhead;
struct node *read()                  // returning read polynomial to first node pointer
{
	struct node *tail,*new,*head=NULL;
	int i,n;
	printf("enter terms of polynomial\n");
	scanf("%d",&n);
	printf("enter coef and pow\n");
	for(i=1;i<=n;i++)
	{
		printf("enter(coef%d,pow%d)",i,i);
		new=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&new->coef);
		scanf("%d",&new->pow);
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;     
		}
		else
		{
			tail->next=new;
			tail=new;
		}
	}
	return(head);
}
void display(struct node *head)
{
	struct node *pos;
	if(head==NULL)
	{
		printf("node is empty");
	}
	else
	{
		pos=head;
		while(pos->next!=NULL)
		{
			printf("%dx^%d + ",pos->coef,pos->pow);
			pos=pos->next;
		}	
		printf("%dx^%d\t",pos->coef,pos->pow);         //display last node
	}
}
struct node *add()
{
	struct node *new,*p1,*p2,*r,*head=NULL;
	p1=p1head;
	p2=p2head;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->pow==p2->pow)
		{
			new=(struct node *)malloc(sizeof(struct node));
			new->coef=p1->coef+p2->coef;
			new->pow=p1->pow;
			new->next=NULL;
			p1=p1->next;
			p2=p2->next;
		}
		else if(p1->pow>p2->pow)
		{
			new=(struct node *)malloc(sizeof(struct node));
			new->coef=p1->coef;
			new->pow=p1->pow;
			new->next=NULL;
			p1=p1->next;
		}else
		{	
			new=(struct node *)malloc(sizeof(struct node));
			new->coef=p2->coef;
			new->pow=p2->pow;
			new->next=NULL;
			p2=p2->next;			
		}
		if(head==NULL)
		{
			head=new;
			r=head;
		}
		else
		{
			r->next=new;
			r=new;
		}
	}
	while(p1!=NULL)
	{
		new=(struct node *)malloc(sizeof(struct node));
		new->coef=p1->coef;
		new->pow=p1->pow;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			r=head;
		}
		else
		{
			r->next=new;
			r=new;
		}
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		new=(struct node *)malloc(sizeof(struct node));
		new->coef=p2->coef;
		new->pow=p2->pow;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			r=head;
		}
		else
		{
			r->next=new;
			r=new;
		}
		p2=p2->next;
	}
	return(head);
}
void main()
{
	printf("enter details of first polynomial\n");
	p1head=read();
	printf("enter details of second polynomial\n");
	p2head=read();
	printf("\n first polynimial is");
	display(p1head);
	printf("\n second polynimial is");
	display(p2head);
	rhead=add();
	printf("\nresult is ");
	display(rhead);
}










	
