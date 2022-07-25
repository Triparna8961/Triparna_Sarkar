#include<stdio.h>
int main()
{
    int a[100],b,i,max,min;
    printf("Enter the number of the elements:-  ");
    scanf("%d",&b);
    printf("Enter the elements of the array:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=1;i<b;i++)
        if(a[i]>max)
            max=a[i];
    printf("The maximum number of the array is:--  %d\n",max);
    for(i=1;i<b;i++)
        if(a[i]<min)
            min=a[i];
    printf("The minimum number of the array is:-- %d",min);
    return 0;
}
