#include<stdio.h>
#include<stdlib.h>
#define Max 100
int G[Max][Max],S[Max][Max],n;
int prims();
int main()
{
    int i,j,total_cost;
    printf("Enter the number of vertexes:-");
    scanf("%d",&n);
    printf("Enter the elements of Adjacency matrix:-\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    total_cost=prims();
    printf("Spanning tree matrix is:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            {printf("%d\t",S[i[j]);}
        printf("\n");}
    Printf("The total cost of The Spanning Tree is:-%d",total_cost);
    return 0;
}
int prims()
{

}
