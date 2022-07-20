#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}
void merge(int arr[], int p, int q, int r) 
{

  
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];


  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  
  while (i < n1 && j < n2) 
  {
    if (L[i] <= M[j])
    {
      arr[k] = L[i];
      i++;
    } 
    else 
    {
      arr[k] = M[j];
      j++;
    }
      k++;
  }

  
  while (i < n1) 
  {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) 
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {

   
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

   
    merge(arr, l, m, r);
  }
}


void printArray(int arr[], int size) 
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}


int main()
{
  struct timeval t0;
  struct timeval t1;
  float elapsed;

  int arr[100];
  int size;
  printf("enter the size:\n");
  scanf("%d",&size); 
  srand( (unsigned) time(NULL) * getpid());  
  
  gettimeofday(&t0, NULL);
  for(int i=0;i<size;i++)
  {
    arr[i]=rand()%100;
  }

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
  gettimeofday(&t1, NULL);

  elapsed = timedifference_msec(t0, t1);

  printf("Code executed in %f milliseconds.\n", elapsed);



}






