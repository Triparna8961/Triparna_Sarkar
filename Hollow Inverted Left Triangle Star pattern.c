#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of the row of the Hollow Inverted Right Triangle Star Pattern:-  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
                if(j>=i)
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
                if(j==i || j==n)
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
