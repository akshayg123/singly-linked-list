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
   int i, key;

   long num=10, j;

   long data[num];
  
   
   srand( (unsigned) time(NULL) * getpid()); 
   
   gettimeofday(&t0, NULL);
   if(data != NULL)
    {
        for(j = 0; j < num; j++)
        {
            data[j] = rand()%100;
        }
    }

/*

   data = (long *)malloc(sizeof(long)*num);
   
   srand( (unsigned) time(NULL) * getpid()); 
   
  
   if(data != NULL)
    {
        for(j = 0; j < num; j++)
        {
            data[j] = rand()%100;
        }
    }
   */
    gettimeofday(&t0, NULL);
    for (j = 1; j < num; j++) 
	{
       	 	key = data[i];
       	 	i = j - 1;
 
        	while (i >= 0 && data[i] > key)
	        {
            	data[i + 1] = data[i];
           	i = i - 1;
        	}
       	 	data[i + 1] = key;
    	}
    for (j = 0; j < num; j++)
	{
	        printf("%d ", data[j]);
	}
    printf("\n");
    gettimeofday(&t1, NULL);	
    elapsed = timedifference_msec(t0, t1);
    printf("Code executed in %f milliseconds.\n", elapsed);
  
   return 0;
}	




























