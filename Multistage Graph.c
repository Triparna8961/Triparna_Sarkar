#include<stdio.h>
int main()
{
    int stages=4,min,i,k,n;
    int cost[9],d[9],path[4];
    int c[9][9];
    printf("Enter the number of vertexes:-");
    scanf("%d",&n);
    printf("Enter the cost in the adjacency matrix:-\n");
    printf("  0 1 2 3 4 5 6 7 8\n");
    for(i=0;i<=n;i++)
        {
            printf("%d ",i);
            for(k=0;k<=n;k++)
                {
                    scanf("%d",&c[i][i]);
                }
        }
    cost[n]=0;
    for(i=n-1;i>=1;i--)
    {
        min=999;
        for(k=(i+1);k<=n;k++)
        {
            if(c[i][k]!=0 && (c[i][k]+cost[k])<min)
            {
                min=(c[i][k]+cost[k]);
                d[i]=k;
            }
        }
        cost[i]=min;
    }
    path[1]=1;
    path[stages]=n;
    for(i=2;i<stages;i++)
        path[i]=d[path[i-1]];
    printf("The shortest path of the graph is:-");
    for(i=4;i>0;i--)
        printf("->%d",path[i]);
    return 0;
}


