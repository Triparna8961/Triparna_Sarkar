#include<stdio.h>
int partition(int a[100],int l,int h)
{
    int pivot= a[l];
    int i=l, j=h,t=0;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    }
    t=a[l];
    a[l]=a[j];
    a[j]=t;
    return j;
}

int quick_sort(int a[100], int l, int h)
{
    if(l<h)
    {
       int j=partition(a,l,h);
        quick_sort(a,l,j);
        quick_sort(a,j+1,h);
    }
}
int print(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements of the array:-");
    scanf("%d",&n);
    printf("Enter the elements of the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements before sorting:-\n");
    print(a,n);
    quick_sort(a,0,n-1);
    printf("The array elements after sorting:-\n");
    print(a,n);
    return 0;
}


