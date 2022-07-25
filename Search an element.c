#include<stdio.h>
int main()
{
    int a[100],b,i,S;
    printf("Enter the number of array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element:-");
    scanf("%d",&S);
    printf("The position of %d in the array:-\n",S);
    for(i=0;i<b;i++)
    {
        if(a[i]==S)
        {
            printf("%d",i+1);
        }

    }
    return 0;
}

