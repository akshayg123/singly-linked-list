#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
	  int data;
	  struct node *next;
	  struct node *temp;
	};
		struct node *head=NULL,*pos=NULL,*tail=NULL;
		int ch,i,f,s,entry,key;
		while(1)
		{
			printf("enter choice\n");
			printf("1.insert\n2.display\n3.search\n4.deletion\n5.exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			 	 {
				   
				   struct node *temp;
				   temp=head;
				   printf("enter position\n");
			   	   scanf("%d",&entry);
				   printf("enter data");
				   scanf("%d",&key);
				   if(entry==0)
					{
					head=(struct node*)malloc(sizeof(struct node));
				        head->data =key;	
				        head->next=temp;
					}
					else
					{
					  	struct node *temp2;
						for(i=0;i<(entry-1);i++)
						{
							temp=temp->next;
						}
						temp2=(struct node*)malloc(sizeof(struct node));
						temp2->data=key;
						temp2->next=temp->next;
						temp->next=temp2;
					}
				}
				case 2:
				{
					pos=head;
					while(pos!=NULL)
						{
						  	printf("%d\t",pos->data);
						  	pos=pos->next;
							
						}
						break;
				}
				case 3:
				{
					pos=head;
					f=0;
					printf("enter search element\n");
					scanf("%d",&s);
					while(pos!=NULL)
		  			   { 
						if(pos->data==s)
						{
						
						f++;
					  	}
					   	pos=pos->next;
					    }
 							if(f==0)
						 	 {
							printf("element not found\n");
						  	}	
						  else
						    {
							printf("element  found\n");
						    }
						 			   
					   							
					break;	
				}
				case 4:
				{	
					struct node *temp;
					printf("enter deletion position\n");
					scanf("%d",&entry);
					temp=head;
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
						break;
				}
				case 5:
				{
					exit(0);
				}
			}
		}
}
			


