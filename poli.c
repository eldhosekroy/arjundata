#include<stdio.h>
#include<string.h>
struct poly
{
  int deg;
  float coeff[10];
};
void main()
{
  int i,j,k,highest;
  struct poly eq1,eq2,sum;
  printf("Enter polynomial equation1\n");
  printf("Enter the highest degree");
  scanf("%d",&eq1.deg);
  for(j=eq1.deg;j>=0;j--)
  {
    printf("Enter coefficient x%d:",j);
    scanf("%f",&eq1.coeff[j]);
  }
  printf("Enter polynomial equation2\n");
  printf("Enter the highest degree");
  scanf("%d",&eq2.deg);
  for(j=eq2.deg;j>=0;j--)
  {
    printf("Enter coefficient x%d:",j);
    scanf("%f",&eq2.coeff[j]);
  }
  if(eq1.deg>eq2.deg)
  {
    highest=eq1.deg;
  }
  else
{
    highest=eq2.deg;
  }
  for(k=highest;k>=0;k--)
  {
    sum.coeff[k]=eq1.coeff[k]+eq2.coeff[k];
  }
  for(k=highest;k>=0;k--)
  {
    printf("%fx%d",sum.coeff[k],k);
    if(k!=0)
    {
      printf("+");
    }
  }
}
