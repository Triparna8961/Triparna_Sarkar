#include<stdio.h>
int main()
{
    int a[100],b,i,even[100],odd[100];
    printf("Enter the number of array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=0;i<b;i++)
        even[i]=0;
    for(i=0;i<b;i++)
        odd[i]=0;
    for(i=0;i<b;i++)
    {
        if(a[i]%2==0)
        {
            even[i]=a[i];
        }
        else
        {
            odd[i]=a[i];
        }
    }
    printf("The even numbers are:-\n");
    for(i=0;i<b;i++)
        if(even[i]!=0)
            printf("%d\n",even[i]);
    printf("The odd numbers are:-\n");
    for(i=0;i<b;i++)
        if(odd[i]!=0)
            printf("%d\n",odd[i]);
    return 0;
}
