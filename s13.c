#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
	  int data;
	  struct node *next;
	};
		struct node *head=NULL,*pos=NULL,*tail=NULL;
		int ch,entry,count,s,f;
		while(1)
		{
			printf("enter choice");
			printf("1.insert\n2.display\n3.exit\t4.count\t5.search");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			 	 {
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
					}
					break;
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
					exit(0);
				}
				case 4:
				{
				        pos=head;
					while(pos!=NULL)
						{
						  count++;
						  pos=pos->next;
						}
					        printf("%d\n",count);		
						break;
				}
				case 5:
				{
					pos=head;
					printf("enter search element\n");
					scanf("%d",&s);
					while(pos!=NULL)
		  			   {
						  pos=pos->next;
                                                  f++;					   
					   }							
					        if(f==0)
						{
						 printf("element not found");
						}else
							{
								printf("element  present");
							}
						break;
				}
			}
		}
}
			

