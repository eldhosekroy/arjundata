#include<stdio.h>
int queue[100]; int front=0,back=0;
void enqueue(int var) {
  queue[back] = var; back++;
} void dequeue()
{ queue[front] = 0; front++;
}
int main()
{ int n, graph[10][10]; printf("Enter the number of vertices: "); scanf("%d",&n);
  int visited[50];
  for(int i=0;i<n;i++)
    visited[i]=0;
  printf("Enter the adjacency matrix: \n");
  for(int i=0;i<n; i++)
  { for(int j=0;j<n;j++)
    scanf("%d",&graph[i][j]);
  }
  enqueue(1); visited[0] = 1;
  while(front != back)
  {
    int current = queue[front]; printf("%d ", current); dequeue();
    for(int i=0;i<n;i++)
    {
      if((graph[current-1][i] == 1) && (visited[i] == 0)) {
        visited[i] = 1;
        enqueue(i+1);
      }
    }
  }
  return 0;
}
