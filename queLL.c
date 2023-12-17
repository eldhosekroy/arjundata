#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node*link;
}
NODE;
NODE*front=NULL,*rear=NULL,*s,*ptr,*disply;
void main()
{
  int no,item;
  printf("\nPROGRAM TO INSERT,DELETE AND DISPLAY ELEMENTS TO QUEUEUSING LINKEDLIST");
  printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\nEnter your choice: ");
  do
  {
    scanf("%d",&no);
    if(no==1)
    {
      ptr=(NODE*)malloc(sizeof(NODE));
      printf("Enter the element: ");
      scanf("%d",&ptr->data);
      ptr->link=NULL;
      if(rear==NULL)
      {
        front=ptr;
        rear=ptr;
      }
      else
    {
        rear->link=ptr;
        rear=ptr;
      }
      printf("%d inserted\n",rear->data);
    }
    else if(no==2)
    {
      if(front==NULL)
        printf("Queue is empty\n");
      else if(front==rear)
      {
      printf("%d deleted\n",front->data);
      free(front);
      front=rear=NULL;
    }
      else
    {
        s=front;
        printf("Deleted Element is %d\n",front->data);
        front=front->link;
        free(s);
      }
    }
    else if(no==3)
    {
      if(front==NULL)
        printf("Queue is empty\n");
      else
      {
        printf("\t\tQueue elements are: ");
        disply=front;
        while(disply!=NULL)
        {
          printf("%d ",disply->data);
          disply=disply->link;
        }
        printf("\n");
      }
    }
    else if(no==4)
    {
      printf("Exited");
      break;
    }
    else
    printf("Invalid choice\n");
    printf("\nEnter next choice: ");
  }
  while(1);
}
