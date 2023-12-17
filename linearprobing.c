 #include <stdio.h>
 #include <stdlib.h>
 #define ts 10
 int h[ts]={NULL};
 void insert()
 {
 int key,index,i,flag=0,hkey;
 printf("\nEnter a value to insert into hash table : ");
 scanf("%d",&key);
 hkey=key%ts;
 for(i=0;i<ts;i++)
 {
 index=(hkey+i)%ts;
 if(h[index]== NULL)
 {
 h[index]=key;
 printf("%d is inserted at index : %d\n",key,index);
 break;
 }
 }
 if(i==ts)
 printf("\nElement cannot be inserted\n");
 }
 void search()
 {
 int key,index,i,flag=0,hkey;
 printf("\nEnter search element: ");
 scanf("%d",&key);
 hkey=key%ts;
 for(i=0;i<ts;i++)
 {
 index=(hkey+i)%ts;
 if(h[index]==key)
 {
 printf("\nvalue is found at index: %d",index);
 break;
 }
 }
 if(i==ts)
 printf("\n Value is not found\n");
 }
 void display()
 {
 int i;
 printf("\nElements in the hash table are :-\n");
 for(i=0;i<ts;i++)
 printf("At index :%d,\t Value = %d\n",i,h[i]);
 }
 void main()
 {
int opt,i;
 printf("\n Press\n 1:Insert\n 2:Display\n 3:Search\n 4:Exit\n Enter choice: ");
 while(1)
 {
 scanf("%d",&opt);
 switch(opt)
 {
 case 1:insert();break;
 case 2:display();break;
 case 3:search();break;
 case 4:printf("Exited\n");exit(0);
 default:printf("Enter valid choice!!!");
 }
 printf("\nEnter next choice: ");
 }
 }
