#include<stdio.h>
int main()
{
  int a[50],n,i,j;
  printf("Enter the no.of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("The shorted elements are ");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}
