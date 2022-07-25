#include<stdio.h>
#include<conio.h>
int sum_of_sub(int m,int k,int r);
int s[100],x[100],d;
int main()
{
    int i,n,sum=0;
    int a[100],b=0;
    printf("Enter the size of set:-");
    scanf("%d",&n);
    printf("Enter the number of the set:-\n");
    for(i=1;i<=n;i++)
        {scanf("%d",&s[i]);
        a[i]=0;}
    printf("Enter the max value:-");
    scanf("%d",&d);
    for(i=1;i<=n;i++)
        {sum=sum+s[i];}
    if(sum<d || s[1]>d)
        printf("No subset is possible.\n");
    else
        sum_of_sub(0,1,sum);
    return 0;
}
int sum_of_sub(int m,int k,int r)
{
    int i=1;
    x[k]=1;
    if((m+s[k])==d)
    {
        printf("Subset:-\n");
        for(i=1;i<=k;i++)
        {
            if(x[i]==1)
            {
                printf("%d ",s[i]);
            }
        }
        printf("\n");
    }
    else
    {
        if(m+s[k]+s[k+1]<=d)
        {
            sum_of_sub((m+s[k]),k+1,r-s[k]);
        }
        if((m+r-s[k]>=d) && (m+s[k+1]<=d))
        {
            x[k]=0;
            sum_of_sub(m,k+1,(r-s[k]));
        }
    }
}
