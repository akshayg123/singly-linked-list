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
		int ch,entry,s,f;
		struct timeval t0;
	        struct timeval t1;
	        float elapsed;
		long num=100000000, i;
		
			for(i=0;i<num;i++)
   			{
				entry=rand()%100;
			   	   
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
			}
					
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
								printf("element foundn\n");
							}



					gettimeofday(&t1, NULL);

   					elapsed = timedifference_msec(t0, t1);

  					 printf("Code executed in %f milliseconds.\n", elapsed);
}








































