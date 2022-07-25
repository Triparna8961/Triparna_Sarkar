#include<stdio.h>
int main()
{
    int a[100],n[100],b,i;
    printf("Enter the number of the array elements:--  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=0;i<b;i++)
    {
        n[i]=a[i];
    }
    printf("The actual array is:-\n");
    for(i=0;i<b;i++)
    {
        printf("%d ==> %d\n",i,a[i]);
    }
    printf("The copied array is:-\n");
    for(i=0;i<b;i++)
    {
        printf("%d ==> %d\n",i,n[i]);
    }
    return 0;
}
