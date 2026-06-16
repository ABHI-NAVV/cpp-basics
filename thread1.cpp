#include<iostream>
#include<thread>
void thefunc(){
  std::cout<<"hello this is the function used by the thread";
}
int main(){
  std::thread threadname(thefunc);
  threadname.join();
  std::cout<<"the main thread is finished";
  std::cout<<std::endl;
  return 0;
  }
