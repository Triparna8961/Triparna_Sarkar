#include<stdio.h>
#include<stdlib.h>
int source,vertex,edge,visited[20],graph[20][20];
void dfs(int i)
{
    int j;
    visited[i]=1;
    printf("%d->",i+1);
    for(j=0;j<vertex;j++)
    {
        if(graph[i][j]==1 && visited[j]==0)
        {
            dfs(j);
        }
    }
}
int main()
{
    int i,j,vertex1,vertex2;
    printf("Enter the number of edges:-");
    scanf("%d",&edge);
    printf("Enter the number of vertex:-");
    scanf("%d",&vertex);
    for(i=0;i<vertex;i++)
        for(j=0;j<vertex;j++);
            graph[i][j]=0;
    for(i=0;i<edge;i++)
    {
        printf("Enter the edges in v1,v2:- ");
        scanf("%d%d",&vertex1,&vertex2);
        graph[vertex1-1][vertex2-1]=1;
    }
    for(i=0;i<vertex;i++)
    {
        for(j=0;j<vertex;j++)
        {
            printf("%d  ",graph[i][j]);
        }
        printf("\n");
    }
    printf("Enter the source vertex:-");
    scanf("%d",&source);
    dfs(source-1);
    return 0;
}
