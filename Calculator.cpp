#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two numbers:-"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"Input an operator:-"<<endl;
    cin>>op;
    switch(op)
    {
        case'+':
            cout<<"The answer is:- "<<n1+n2<<endl;
            break;
        case'-':
            cout<<"The answer is:- "<<n1-n2<<endl;
            break;
        case'*':
            cout<<"The answer is:- "<<n1*n2<<endl;
            break;
        case'/':
            cout<<"The answer is:- "<<n1/n2<<endl;
            break;
        default:
            cout<<"Enter another operator."<<endl;

    }
    return 0;
}
