#include<stdio.h>
#include<stdlib.h>
#define max 5
void insert();
void delete();
void display();
int queue[max];
int rear=-1,front=-1;
void main()
{
  int choice;
  printf("1.insert element to queue\n");
  printf("2.delete element from queue\n");
  printf("3.display all elements of queue\n");
  printf("4.exit\n");
  printf("Enter your choice : ");
  while(1)
  {
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:insert();
        break;
      case 2:delete();
        break;
      case 3:display();
        break;
      case 4:printf("--- Exited ---");exit(0);
      default:printf("wrong choice\n");
    }
    printf("\nEnter next choice : ");
  }
}
void insert()
{
  int item;
  if(rear==max-1)
  {
    printf("queue overflow\n");
  }
  else
{ if(front==-1)
    {
      front=0;
    }
    printf("insert the element in queue: ");
    scanf("%d",&item);
    rear=rear+1;
    queue[rear]=item;
    printf("%d inserted\n",item);
  }
}
void delete()
{
  if(front==-1)
  {
    printf("queue underflow\n");
    return ;
  }
  else
{
    printf("element deleted from queue is :%d\n",queue[front]);
    if(front==rear)
    {
      front=-1;
      rear=-1;
    }
    else
  {
      front=front+1;
    }
  }
}
void display()
{
  int i;
  if(front==-1)
    printf("queue is empty\n");
  else
  {
    printf("queue is :\n");
    for(i=front;i<rear;i++)
      printf("%d, ",queue[i]);
    printf("%d",queue[rear]);
    printf("\n");
  }
}
