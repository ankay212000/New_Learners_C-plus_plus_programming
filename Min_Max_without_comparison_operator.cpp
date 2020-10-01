#include<iostream.h>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter two numbers"<<endl;
  cin>>a>>b;
  if(a/b)
  {
     if(a^b)
     {
       cout<<a<<" is greater";
     }
     else
     {
       cout<<"numbers are same";
     }
  }
  else
  {
  cout<<b<<" is grater";
  }
return 0;
}
