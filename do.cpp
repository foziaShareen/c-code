#include<iostream>
using namespace std;
int main()
{
  int num1,num2,num3,largest,smallest;
  cout<<"enter three numbers"<<endl;
  cin>>num1>>num2>>num3;
  largest=num1;
  if(num2>largest)
  {
largest=num2;
  }
if(num3>largest)
{
   largest=num3;
}
cout<<"the largest is ="<<largest;
//cin>>num1>>num2>>num3;
  smallest=num1;
  if(num2<smallest)
  {
smallest=num2;
  }
if(num3<smallest)
{
   smallest=num3;
}
cout<<"the smallest is ="<<smallest;
}