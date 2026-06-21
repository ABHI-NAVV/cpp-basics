#include<iostream>
template <typename t>
t add(t a,t b)
{
  return(a+b);
}
int main()
{
  int a,b;
  double c,d;
  std::cout<<"enter the two numbers integers and the two floating point numbers";
  std::cin>>a>>b>>c>>d;
  int sum;
  double sumofd;
  sum=add(a,b);
  sumofd=add(c,d);
  std::cout<<"\n the integer numbers sum is :"<<sum<<"the sum of the floating point numbers is :"<<sumofd;
  std::cout<<std::endl;
  return 0;
}
