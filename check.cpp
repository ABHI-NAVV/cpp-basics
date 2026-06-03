#include <iostream>
#include <string>
int main()
{
  int h;
  float f;
  double d;
  char ch;
  std::string stringofuser;
  std::cout<<"enter the user inputs i want to convert it into each ";
  std::cin>>h;
  std::cin>>f;
  std::cin>>d;
  std::cin>>ch;
  std::cin>>stringofuser;
  std::cout<<"now printing all of the user input";
std::cout<<h<<"this is the integer \t"<<f<<"this is the floating\t"<<ch<<"this is the charector type value\t"<<stringofuser<<"this is the string type value"<<std::endl;
  return 0;
  }
