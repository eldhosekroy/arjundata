#include<stdio.h>
void main()
{
  int a[30],n,i,j,key;
  printf("Enter the no.of elements\n ");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=2;j<=n;j++)
  {
    key=a[j];
    i=j-1;
    while(i>0&&a[i]>key)
    {
      a[i+1]=a[i];
      i=i-1;
    }
    a[i+1]=key;
  }
  printf("Shorted array\n");
  for(i=1;i<=n;i++)
  {
    printf("%d\t",a[i]);
  }
}
