#include<stdio.h>
#include<math.h>
int main()
{
    long long int num,count=0,n,a,b,c,sum=0;
    int i;
    printf("Enter the end number:- ");
    scanf("%d",&num);
    printf("The armstrong numbers are:-\n");
    for(i=1;i<=num;i++)
    {
        a=i;
        b=0;
        count=0;
        while(a!=0)
        {
            count++;
            a=(a/10);
        }
        c=i;
        sum=0;
        while(c!=0)
        {
            b=(c%10);
            sum=(sum+(pow(b,count)));
            c=(c/10);
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
