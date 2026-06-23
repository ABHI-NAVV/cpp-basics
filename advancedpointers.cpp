#include<iostream>
#include<memory>
int main()
{
  std::unique_ptr<int> pointersmart = std::make_unique<int>(7);
  std::cout<<"the value inside the smart pointer is :" <<*pointersmart;
  std::cout<<std::endl;
  return 0;
}
