#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5][5]={
    {8,3,9,0,10},
    {3,5,17,1,1},
    {2,8,6,23,1},
    {15,7,3,2,9},
    {6,14,2,6,0}
    };
    int i,j;
    int sum=0;
    //row sum
    printf("The total of row:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum+=a[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    //column sum
    printf("The total of the column:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum+=a[j][i];
        }
        printf("%d\t",sum);
        sum=0;
    }
    return 0;
}
