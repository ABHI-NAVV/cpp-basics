#include<iostream>
int main()
{
  int nums=6;
  int* ptr=&nums;
  std::cout<<(*ptr);
  std::cout<<std::endl;
  return 0;
}
