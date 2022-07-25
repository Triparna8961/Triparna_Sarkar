#include<stdio.h>
int main()
{
    int a[100],b,i,j,freq[100],count;
    printf("Enter the number of the array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=0;i<b;i++)
        freq[i]=0;
    for(i=0;i<b;i++)
       {
            for(j=i;j<b;j++)
            {
                if(a[i]==a[j])
                {
                    freq[i]=freq[i]+1;
                }
                else
                    freq[i]=0;
            }
        }
    printf("The unique number:--\n");
    for(i=0;i<b;i++)
        if(freq[i]==0)
            printf("%d\n",a[i]);
    return 0;
}
