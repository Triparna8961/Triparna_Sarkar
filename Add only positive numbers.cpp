#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the numbers ONLY positive"<<endl;
    cin>>n;
    while(n>0)
    {
        sum=sum+n;
        cin>>n;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
