#include <stdio.h>
void merge(int arr[],int p,int q,int r)
{
  int n1=q-p+1;
  int n2=r-q;
  int L[n1],M[n2];
  for (int i=0;i<n1;i++)
    L[i]=arr[p+i];
  for(int j=0;j<n2;j++)
    M[j]=arr[q+1+j];
  int i=0,j=0,k=p;
  while((i<n1) && (j<n2))
  {
    if(L[i]<=M[j])
    {
      arr[k]=L[i];
      i++;
    }
    else
  {
      arr[k]=M[j];
      j++;
    }k++;
  }
  while(i<n1)
  { arr[k]=L[i]; i++; k++;}
  while(i<n2)
  { arr[k]=M[j]; j++; k++; }
}
void mergesort(int arr[],int t,int r)
{
  if(t<r)
  {
    int m=t+(r-t)/2;
    mergesort(arr,t,m);
    mergesort(arr,m+1,r);
    merge(arr,t,m,r);
  }
}
void printarray(int arr[],int size)
{
  for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
  printf("\n");
}
int main()
{
  int n,arr[10];
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  mergesort(arr,0,n-1);
  printf("Sorted array: \n");
  printarray(arr,n);
}
