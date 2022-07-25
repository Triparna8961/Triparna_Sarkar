#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    cout<<"size of character: "<< sizeof(char)<<"bytes"
        <<endl;
    cout<<" minimum char value: "<< CHAR_MIN << "bytes"
        <<endl;
    cout<<"maximum char value: "<< CHAR_MAX<< "bytes"
        <<endl;
    cout<<"size of integer: "<< sizeof(int)<<"bytes"
        <<endl;
    cout<<"size of short integer: "<< sizeof(short int)
        <<"bytes"<<endl;
    cout<<"size of long integer: "<< sizeof(long int)
        <<"bytes"<<endl;
    cout<<"size of signed long integer: "
        << sizeof(signed long int)<<"bytes"<<endl;
    cout<<"size of unsigned long integer: "
        << sizeof(unsigned long int)<<"bytes"<<endl;
    cout<<"size of float: "<< sizeof(float)
        <<"bytes"<<endl;
    cout<<"size of double: "<< sizeof(double)
        <<"bytes"<<endl;
    cout<<"size of wchar_t: "<< sizeof(wchar_t)
        <<"bytes"<<endl;
    return 0;
}
