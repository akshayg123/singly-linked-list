//linear search update
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
    long num=10,j;   
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
	for(j = 0; j < num; j++)
	{
		printf("%d\t",data[j]); 
   	}
	printf("enter your element\n");
    	scanf("%d",&search);
    gettimeofday(&t0, NULL);
    for(j = 0; j < num; j++)
    {
	if(data[j]==search)
	{
		flag=1;
	}
	
    }
   if(flag==1)
   {
	printf("element is found\n");
   }else
   {
        printf("element is not found\n");
   }

    gettimeofday(&t1, NULL);

   elapsed = timedifference_msec(t0, t1);

   printf("Code executed in %f milliseconds.\n", elapsed);

   return 0;
}

