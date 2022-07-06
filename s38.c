//binary search update
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}
int main(void)
{
    struct timeval t0;
    struct timeval t1;
    float elapsed;
    long *data;
    long num=10,j,i;
    int mid,l=0,h=num-1,temp;
    int search,flag=0;
    
    data = (long *)malloc(sizeof(long)*num);
   
     
   srand( (unsigned) time(NULL) * getpid());
    
    if(data != NULL)
     {
         for(j = 0; j < num; j++)
         {
	     
             data[j] = rand()%100;
         }
     }
   	
    gettimeofday(&t0, NULL);
   
         for(j = 0; j < num-1; j++)
         {
             for(i=0; i<(num-j-1); i++)
		{
			 {
				if(data[i]>data[i+1])
				{
					temp=data[i];
				 	data[i]=data[i+1];
					data[i+1]=temp;
				}
			 }
		}			
         }
	for(j = 0;j < num-1; j++)
        {
		printf("%d\t",data[j]); 
     	}
	printf("enter your element\n");
        scanf("%d",&search);
    		
		while(l<=h)
		{
			mid=(l+h)/2;
			if(data[mid]<search)
			{
				l=mid+1;
				
				
			}
			else if(data[mid]>search)
			{
				
				h=mid-1;
				
			}
			else
			{
				flag=1;
				break;
			}

		}
		/*for(j = 0;j < num-1; j++)
		{
			if(data[j]!=search)
			{
			 	flag=0;
			}
		}*/
		if(flag==1)
		{
			printf("element is  found\n");
		}else
		{
			printf("element is not found\n");
		}
   gettimeofday(&t1, NULL);	
   elapsed = timedifference_msec(t0, t1);

   printf("Code executed in %f milliseconds.\n", elapsed);

   return 0;
}			
			   


