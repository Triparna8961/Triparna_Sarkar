#include<iostream>
using namespace std;
int main()
{
    char m;
    int lowercase,uppercase;
    cout<<"Enter the alphabet:-"<<endl;
    cin>>m;
    lowercase=(m=='a'||m=='e'||m=='i'||m=='o'||m=='u');
    uppercase=(m=='A'||m=='E'||m=='I'||m=='O'||m=='U');
    if(lowercase||uppercase)
        cout<<"Vowel"<<endl;
    else
        cout<<"Consonant"<<endl;
}
