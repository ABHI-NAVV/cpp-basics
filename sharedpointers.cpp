#include<iostream>
#include<memory>
int main()
{
  std::cout<<"demonstrating the use of the shared and the unique pointers which deletes it self after it goes out of scope";
  std::cout<<std::endl;
  std::shared_ptr<int>thisisshared=std::make_shared<int>(90);
  std::shared_ptr<int>thisisthesecond=thisisshared;
  std::cout<<"the both of the pointers is :"<<*thisisshared<<  "   "<<*thisisthesecond;
  return 0;
}
