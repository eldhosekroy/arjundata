#include<stdio.h>
void swap(int *a,int *b)
{
  int t= *a;
  *a=*b;
  *b=t;
}
int partition(int array[],int low,int high)
{
  int pivot=array[high];
  int i=(low-1);
  for (int j=low;j<high;j++)
  {
    if(array[j]<=pivot)
    {
      i++;
      swap(&array[i],&array[j]);
    }
  }
  swap(&array[i+1],&array[high]);
  return (i+1);
}
void quicksort(int array[],int low,int high)
{
  if(low<high)
  {
    int pi=partition(array,low,high);
    quicksort(array,low,pi-1);
    quicksort(array,pi+1,high);
  }
}
void printarray(int array[],int size)
{
  for (int i=0;i<size;++i)
    printf("%d ",array[i]);
  printf("\n");
}
void main()
{
  int data[10],n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&data[i]);
  quicksort(data,0,n-1);
  printf("Sorted array: ");
  printarray(data,n);
}
