#include<stdio.h>
int merge(int a[100],int beg, int mid, int end)
{
    int i,j,k;
    int n1=(mid-beg+1);
    int n2=(end-mid);
    int left_array[n1], right_array[n2];
    for(i=0;i<n1;i++)
        left_array[i]=a[beg+i];
    for(j=0;j<n2;j++)
        right_array[j]=a[mid+1+j];
    i=0;
    j=0;
    k=beg;
    while(i<n1 && j<n2)
    {
        if(left_array[i]<=right_array[j])
        {
            a[k]=left_array[i];
            i++;
        }
        else
        {
            a[k]=right_array[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=left_array[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=right_array[j];
        j++;
        k++;
    }
}
int mergesort(int a[100], int beg, int end)
{
    if(beg<end)
    {
        int mid=((beg+end)/2);
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
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
    printf("Enter the number of elements in the array:- ");
    scanf("%d",&n);
    printf("Enter the elements of the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements before sorting:-\n");
    print(a,n);
    mergesort(a,0,n-1);
    printf("The array elements after sorting:-\n");
    print(a,n);
    return 0;
}
