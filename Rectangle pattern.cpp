#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns:-"<<endl;
    cin>>r>>c;
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
