#include<stdio.h>
#include<math.h>
int main()
{
   long long int num,count=0,n,a,b,sum=0;
   printf("Enter the number:- ");
   scanf("%d",&num);
   n=num;
   while(num!=0)
   {
       count++;
       num=(num/10);
   }
   a=n;
   while(a!=0)
   {
       b=(a%10);
       sum=(sum+(pow(b,count)));
       a=(a/10);
   }
   if(sum==n)
   {
       printf("The number %d is a armstrong number.",n);
   }
   else
   {
       printf("The number is %d not a armstrong number.",n);
   }
   return 0;
}
