#include<stdio.h>
void main()
{
  int a[30],i,j,k,t,n;
  printf("enter the number of elements\n ");
  scanf("%d",&n);
  printf("enetr the elements\n ");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++)
  {
    k=i;
    for(j=i+1;j<=n;j++)
    {
      if(a[j]<a[k])
        k=j;
    }
    t=a[i];
    a[i]=a[k];
    a[k]=t;
  }
  printf("sorted array:\n");
  for(i=1;i<=n;i++)
  {
    printf("%d\t",a[i]);
  }
}
