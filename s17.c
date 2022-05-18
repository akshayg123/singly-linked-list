#include<stdio.h>
#include<stdlib.h>
#include<time.h>
float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}
void main()
{
	struct node
	{
	  int data;
	  struct node *next;
	};
		struct node *head=NULL,*pos=NULL,*tail=NULL;
		int ch,count,s,f;
		struct timeval t0;
	        struct timeval t1;
	        float elapsed;
		long num=1000, i;
		while(1)
		{
			printf("enter choice\n");
			printf("1.insert\n2.display\n3.exit\t4.count\t5.search");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			 	 {
			   	  for(i=0;i<num;i++)
 				  {
				     
				    if(head==NULL)
					{
					  head=(struct node*)malloc(sizeof(struct node));
					  head->data=rand()%100;
					  pos=head;
					  tail=head;
					}
					else
					{
					  tail->next=(struct node*)malloc(sizeof(struct node));
					  tail=tail->next;
					  tail->data=rand()%100;
					}
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
					gettimeofday(&t0, NULL);
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
						gettimeofday(&t1, NULL);

   						elapsed = timedifference_msec(t0, t1);

  				        	printf("Code executed in %f milliseconds.\n", elapsed);
						break;
				}                                					
			}
		}
}
			
