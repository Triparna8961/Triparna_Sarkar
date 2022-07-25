#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers:-"<<endl;
    cin>>a>>b;
    int i;
    while(a<=b)
    {
        for(i=2;i<a/2;i++)
        {
            if(a%i==0)
            {
                cout<<a<<" -> Non-Prime"<<endl;
                break;
            }
        }
        if(i==a/2)
            cout<<a<<" -> Prime"<<endl;
        a++;
    }
    return 0;
}
