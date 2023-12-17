#include<stdio.h>
int s[100],c,n,top,x,i;
void push(void);
void display(void);
void pop(void);
void main()
{
  top=-1;
  printf("\n Enter the size of STACK: ");
  scanf("%d",&n);
  printf("\n STACK OPERACTIONS USING ARRAY");
  printf("\n ---------------------------------");
  printf("\n 1-PUSH\n 2-POP\n 3-DISPLAY\n 4-EXIT");
  printf("\n Enter the choice: ");
  do
  {
    scanf("%d",&c);
    switch(c)
    {
      case 1: push();break;
      case 2: pop();break;
      case 3: display();break;
      case 4: printf("\n --- EXITED ---\n");break;
      default:printf("\n Please enter a valid choice !!!");
    }
    if(c!=4)
      printf("\n Enter the next choice: ");
  }while(c!=4);
}
void push()
{
  if(top>=n-1)
    printf("\n --- STACK IS OVER FLOW ---");
  else
  {
    printf("\n Enter a value for push: ");
    scanf("%d",&x);
    top++;
    s[top]=x;
    printf("%d pushed successfully",x);
  }
}
void pop()
{
  if(top<= -1)
    printf("\n --- STACK IS UNDER FLOW --- ");
  else
  {
    printf("\n The poped element is %d",s[top]);
    top--;
  }
}
void display()
{
  if(top>=0)
  {
    printf("\n The elements in STACK\n");
    for(i=top;i>=0;i--)
      printf("\n %d ",s[i]);
  }
  else
  printf("\n --- THE STACK IS EMPTY ---");
}
