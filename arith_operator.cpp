//including library

#include<iostream>
using namespace std;

//writing main method
int main()
{
  //declaring and initializing variables
  int a=4, b=5;
  int sum,sub,mul,div,mod;

  //doing arithmetic operations
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  mod=a%b;

  //printing results
  cout<<"The sum of two variables"<<sum<<endl;
  cout<<"The diference of two variables"<<sub<<endl;
  cout<<"The product of two variables"<<mul<<endl;
  cout<<"The quotient of two variables"<<div<<endl;
  cout<<"The remainder of two variables"<<mod<<endl;
  return 0;
 }
