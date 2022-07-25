#include<stdio.h>
int main()
{
    int a[100],b,i,j;
    printf("Enter the number of the array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    printf("The duplicate number:--\n");
    for(i=0;i<b;i++)
        {
            for(j=i+1;j<b;j++)
            {
                if(a[i]==a[j])
                {
                    printf("%d\n",a[i]);
                }
            }
        }
    return 0;
}
