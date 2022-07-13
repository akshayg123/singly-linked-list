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
   long num=10,i,j;
   int temp,minpos;
   data = (long *)malloc(sizeof(long)*num);
   
   srand( (unsigned) time(NULL) * getpid()); 
   
   gettimeofday(&t0, NULL);
   if(data != NULL)
    {
        for(j = 0; j < num; j++)
        {
            data[j] = rand()%100;
        }
    }
   gettimeofday(&t1, NULL);
   for(j = 0; j < num; j++)
      {
	     minpos=i;
             for(i=j+1; i<num; i++)
			 {
				if(data[minpos]<data[i])
				{
					minpos=j;
				}
			 }
      			temp=data[i];
      			data[i]=minpos;
      			data[minpos]=temp;
	}
    for(j = 0;j < num-1; j++)
        {
		printf("%d\t",data[j]); 
     	}
	gettimeofday(&t1, NULL);	
        elapsed = timedifference_msec(t0, t1);

        printf("Code executed in %f milliseconds.\n", elapsed);
  
   return 0;
}	






























