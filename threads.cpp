#include<iostream>
#include<thread>
#include<vector>
void firstfunc()
{
  std::cout<<"this is the first function to the first thread";
}
void secondfunc()
{
  std::cout<<"this is the second function to the second threads";
}
int main()
{
  std::thread thread1{firstfunc};
  std::thread thread2{secondfunc};
  thread1.join();
  thread2.join();
  return 0;
}
