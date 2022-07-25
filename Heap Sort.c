#include<stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void heapify(int a[100], int n, int i)
{
    int l=i;
    int left=(2*i);
    int right=(2*i)+1;
    if(left<n && a[left]>a[l])
        l=left;
    if(right<n && a[right]>a[l])
        l=right;
    if(l!=i)
    {
        swap(&a[i],&a[l]);
        heapify(a,n,l);
    }

}
void heap_sort(int a[100], int n)
{
    for(int i=n/2;i>0;i--)
        heapify(a,n,i);
    for(int i=n;i>0;i--)
    {
        swap(&a[1],&a[i]);
        heapify(a,i,1);
    }
}
int print(int a[100], int n)
{
    for(int i=1;i<=n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

int main()
{
    int a[100],n,i;
    printf("Enter the size of the array:-");
    scanf("%d",&n);
    printf("Enter the elements of the array:-\n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The array elements before sorting:-\n");
    print(a,n);
    heap_sort(a,n);
    printf("The array elements after sorting:-\n");
    print(a,n);
    return 0;
}
