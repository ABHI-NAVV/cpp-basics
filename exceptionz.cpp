#include<iostream>
int main()
{
  int a,b;
  std::cout<<"enter a two numbers to do the division";
  std::cin>>a>>b;
  try{
    if(b==0)
      throw (std::string("this is not a valid number to do the divison"));
   else {
     std::cout<<"the answer is "<<a/b;
   }
  }
  catch(std::string message)
  {
    std::cout<<"exception in the calculation the error is :"<<message<<std::endl;
  }
  return 0;
}
