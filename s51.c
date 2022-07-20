#include<stdio.h>
#include <stdlib.h>
#include <time.h>
float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}
void quickSort(int [10],int,int);

void main(){
  
  struct timeval t0;
  struct timeval t1;
  float elapsed;

  int list[100],size,i;
  srand( (unsigned) time(NULL) * getpid());
  printf("length of list: ");
  scanf("%d",&size);

  gettimeofday(&t0, NULL);
  for(i = 0; i < size; i++)
    list[i]=rand()%100;

  quickSort(list,0,size-1);

  printf(" sorted list is: ");
  for(i = 0; i < size; i++)
    printf(" %d",list[i]);

  
  gettimeofday(&t1, NULL);

  elapsed = timedifference_msec(t0, t1);

  printf("Code executed in %f milliseconds.\n", elapsed);
 
}

void quickSort(int list[100],int first,int last){
    int pivot,i,j,temp;

     if(first < last){
         pivot = first;
         i = first;
         j = last;

         while(i < j){
             while(list[i] <= list[pivot] && i < last)
                 i++;
             while(list[j] > list[pivot])
                 j--;
             if(i <j){
                  temp = list[i];
                  list[i] = list[j];                        // swapping
                  list[j] = temp;
             }
         }

         temp = list[pivot];
         list[pivot] = list[j];
         list[j] = temp;
         quickSort(list,first,j-1);
         quickSort(list,j+1,last);
    }
}
