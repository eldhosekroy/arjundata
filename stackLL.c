#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node *stackhead,*new,*ptr,*top;
void cnode()
{
  new=(struct node*)malloc(sizeof(struct node));
  new->link=NULL;
}
void push()
{
  int item;
  cnode();
  printf("Enter the item: ");
  scanf("%d",&item);
  new->data=item;
  new->link=top;
  top=new;
  stackhead->link=top;
}
void pop()
{
  int item;
  if(top==NULL)
  {
    printf("stack is empty\n");
  }
  else
{
    ptr=top->link;
    item=top->data;
    printf("%d is deleted\n",item);
    free(top);
    stackhead->link=ptr;
    top=ptr;
  }
}
void status()
{
  int nodecount;
  ptr=stackhead->link;
  if(ptr==NULL)
  {printf("stack is empty\n");
  }
  else
{
    nodecount=0;
    while(ptr!=NULL)
    {
      nodecount=nodecount+1;
      ptr=ptr->link;
    }
    printf("\nthe item at front of linked list(top of stack):%d\nstack contains:%ditems",top->data,nodecount);
  }
}
void display()
{
  if(top==NULL)
  {
    printf("stack is empty\n");
  }
  else
{ptr=top;
    printf("->");
    while(ptr->link!=NULL)
    {
      printf("%d->",ptr->data);
      ptr=ptr->link;
    }
    printf("%d",ptr->data);
  }
}
void main()
{
  int ch;
  stackhead=(struct node*)malloc(sizeof(struct node));
  stackhead->link=NULL;
  top=NULL;
  printf("\n1.push\n2.pop\n3.status\n4.display\n5.Exit\n");
  printf("enter the choice: ");
  do
  {
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:push();
        break;
      case 2:pop();
        break;
      case 3:status();
        break;
      case 4:display();
        break;
      case 5:printf("Exited\n");exit(0);
      default:printf("invalid choice");
    }
    printf("\nEnter next choice: ");
  }while(ch!=5);
}
