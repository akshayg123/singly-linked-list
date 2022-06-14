#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		struct node *prev;
		struct node *next;
		int data;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int i,ch,entry;
	while(1)
	{
		printf("enter your choice\n");
		printf("1.enque,2.deque,3.is empty,4.display,5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("enter element\n");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head->prev=NULL;
					head->data=entry;
					head->next=NULL;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail->next->prev=tail;
					tail->next->data=entry;
					tail->next->next=NULL;
					tail=tail->next;
				}
				break;
			}
			case 2:
			{
				if(head->next==NULL)
				{
					printf("element deleted is %d",head->next);
					head=NULL;
					break;
				}
				if(head==NULL)
				{
					printf("que is empty\n");
					break;
				}
				struct node *del;
				del=head;
				head=head->next;
				del->prev=NULL;
				del->next=NULL;
				free(del);
				break;
			}
			case 3:
			{
				
				if(head->next==NULL)
				{
					printf("element deleted is %d",head->next);
					head=NULL;
					break;
				}
				if(head==NULL)
				{
					printf("que is empty\n");
					break;
				}
				break;
			}
			case 4:
			{
				pos=head;
				while(pos!=NULL)
				{
					printf("%d\t", pos->data);
					pos=pos->next;
				}
				break;
			}
			case 5:
			{
				exit(0);
			}
		}
	}
}
			
			
			
			
			
