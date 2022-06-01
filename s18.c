#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
	  struct node *prev;
	  int data;
	  struct node *next;
	  
	};
		struct node *head=NULL,*pos=NULL,*tail=NULL;
		int i,ch,entry;
		while(1)
		{
			printf("enter choice\n");
			printf("1.insert(E)\n2.insert(B)\n3.display\n4.reverse display\n5.delete(E)\n6.delete(B)\n7.exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			 	 {
				   
				   
				   printf("enter element\n");
			   	   scanf("%d",&entry);
				   if(head==NULL)
					{
					head=(struct node*)malloc(sizeof(struct node));
					head->prev=NULL;
				        head->data =entry;	
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
				 	printf("enter element\n");
			   		scanf("%d",&entry);
	 	 			 if(head==NULL)
					{
 						head=(struct node*)malloc(sizeof(struct node));
						head->prev=NULL;
				   		head->data =entry;	
				       		head->next=NULL;
						pos=head;
						tail=head;
					}else
					{
					struct node *temp;
					temp=(struct node*)malloc(sizeof(struct node));
					head->prev=temp;
					temp->data=entry;
					temp->next=head;
					temp->prev=NULL;					
					head=temp;
					}
				}
				case 3:
				{
					pos=head;
					while(pos!=NULL)
						{
						  	printf("%d\t",pos->data);
						  	pos=pos->next;
							
						}
						break;
				}
				case 4:
				{
					pos=tail;
					while(pos!=NULL)
						{
						  	
						  	
							printf("%d\t",pos->data);
							pos=pos->prev;
						}
						break;
				}
				case 5:
				{
					struct node *del;				
					del=tail;
					tail=tail->prev;
					tail->next=NULL;
					del->prev=NULL;
					free(del);
					break;
				}
				case 6:
				{
					struct node *del;	
					del=head;
					head=head->next;
					del->next=NULL;		
					del->prev=NULL;
					free(del);
					break;
				}
				case 7:
				{
					exit(0);
				}
		}
	}
}
















