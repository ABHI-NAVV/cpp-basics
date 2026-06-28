#include<iostream>
int main()
{
  int num;
  try {
    std::cout<<"enter the number you want to divide";
    std::cin>>num;
    if(num==0)
      throw 102;
  }
  catch (int errorcode)
  {
   std::cout<<"error caught succesfully :"<<errorcode;
  }
  return 0;
}
