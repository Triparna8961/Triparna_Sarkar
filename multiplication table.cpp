#include<iostream>
using namespace std;
int main()
{
    int n,multi;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    cout<<"The multiplication table is:"<<endl;
    for(int i=1;i<=10;i++)
    {
        multi=0;
        multi=n*i;
        cout<<n<<"*"<<i<<"="<<multi<<endl;
    }
    return 0;
}
