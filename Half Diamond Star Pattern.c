#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of the column for the Half Diamond Star Pattern:-  ");
    scanf("%d",&n);
    for(i=1;i<=(2*n-1);i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n;j++)
            {
                if(j<=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j<=(2*n-i))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
