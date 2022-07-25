#include<stdio.h>
int main()
{
    int a[100],b,i,t,in,po,j;
    printf("Enter the number of elements:-  ");
    scanf("%d",&b);
    printf("Enter the elements:-\n");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    printf("Enter the element and its position:-\n");
    scanf("%d%d",&in,&po);
    for(i=0;i<b;i++)
        if(i==po-1)
        {
            t=a[i];
            for(j=i;j<b;j++)
            {
                a[j]=a[j+1];
            }
        }
    printf("The array after deleting the element is:-\n");
    for(i=0;i<b-1;i++)
        printf("%d\n",a[i]);
    return 0;
}
