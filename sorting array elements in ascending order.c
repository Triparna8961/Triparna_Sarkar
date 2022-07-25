#include<stdio.h>
int main()
{
    int a[100],b,i,j,t;
    printf("Enter the number of array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("The sorted array is :-\n");
    for(i=0;i<b;i++)
        printf("%d\n",a[i]);
    return 0;
}
