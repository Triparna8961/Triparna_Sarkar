#include<stdio.h>
int main()
{
    int n,a=1,b=0,ans=0,i;
    printf("Enter the nth number:- ");
    scanf("%d",&n);
    printf("The fibonacci series is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b);
        ans=(b+a);
        b=a;
        a=ans;
    }
    return 0;
}
