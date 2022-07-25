#include<stdio.h>
int main()
{
    int a[100],b,i,j,count=0;
    printf("Enter the number of elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("The total duplicate number is:- %d",count);
    return 0;
}
