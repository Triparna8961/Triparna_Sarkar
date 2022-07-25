#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cout<<"Enter the  number of n:-"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    m=0;
    for(int j=1;j<=i;j++)
    {
      m=m+1;
      cout<<m<<" ";
    }
    cout<<endl;
  }
  return 0;
}
