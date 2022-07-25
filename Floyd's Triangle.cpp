#include<iostream>
using namespace std;
int main()
{
    int n,m=0;
    cout<<"Enter the number of rows:-"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            m=m+1;
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}

