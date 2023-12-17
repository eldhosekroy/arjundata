#include<stdio.h>
void main()
{
  int i,j,a[50][50],m,n,sparse[50][50],s,count=0,r;
  printf("Enter the row size\n");
  scanf("%d",&m);
  printf("Enter the column size\n");
  scanf("%d",&n);
  printf("enter the sparse matrix\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]!=0)
      {
        count++;
      }
    }
  }
  printf("no of non zero elements=%d\n",count);
  r=count+1;
  printf("no of row=%d\n",r);
  sparse[0][0]=m;
  sparse[0][1]=n;
  sparse[0][2]=count;
  s=1;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]!=0)
      {
        sparse[s][0]=i;
        sparse[s][1]=j;
        sparse[s][2]=a[i][j];
        s++;
      }
    }
  }
  printf("sparse matrix\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",sparse[i][j]);
    }
    printf("\n");
  }
}
