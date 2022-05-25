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
		int ch,i,f,s,entry;
		while(1)
		{
			printf("enter choice\n");
			printf("1.insert\n2.display\n3.search\n4.deletion\n5.exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			 	 {
			   	   scanf("%d",&entry);
				   if(head==NULL)
					{
					head=(struct node*)malloc(sizeof(struct node));
				        head->data =entry ;	
				        pos=head;
					tail=head;
					}
					else
					{
					  	tail->next=(struct node*)malloc(sizeof(struct node));
					  	tail=tail->next;
					        tail->data = entry;
						break;
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
			


