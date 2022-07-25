#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the number of row and column:-- ");
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<((2*n)+1);j++)
        {
            if(j<=(n+i+1) && j>=(n-i-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
