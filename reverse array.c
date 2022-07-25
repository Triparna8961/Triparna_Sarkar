#include<stdio.h>
int main()
{
    int a[100],b,i,j,t;
    printf("Enter the number of Array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=(b-1)/2;i++)
        {
            t=a[i];
            a[i]=a[b-i-1];
            a[b-i-1]=t;
        }
    printf("The reverse array:-\n");
    for(i=0;i<b;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
