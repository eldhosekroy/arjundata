#include<stdio.h>
void main()
{
  int a[50],i,search,c=0,n;
  printf("enter the number of elements:");
  scanf("%d",&n);
  printf("enter the element:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the elements to be searched");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
    if(a[i]==search)
    {
      c=1;
      break;
    }
  }
  if(c==1)
  {
    printf("%d is found at position %d",search,i+1);
  }
  else
{
    printf("%d not found",search);
  }
}
