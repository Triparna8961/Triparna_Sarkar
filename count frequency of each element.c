#include<stdio.h>
int main()
{
    int a[100],b,i,j,count,freq[100];
    printf("Enter the number of array elements:-  ");
    scanf("%d",&b);
    printf("Enter the array elements:-\n");
    for (i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(j=0;j<b;j++)
        freq[j]=0;
    for(i=0;i<b;i++)
    {
        count=0;
        for(j=0;j<b;j++)
        {
            if(a[j]==a[i])
            {
                count++;
                freq[j]=0;
            }
        }
        freq[i]=count;
    }
    printf("The frequency of each number is:-\n");
    for(j=0;j<b;j++)
    {
        if(freq[j]!=0)
            printf("The frequency of %d is %d\n",a[j],freq[j]);}
    return 0;
}
