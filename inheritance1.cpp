#include<iostream>
class parentclass{
  public:;
  void print(){
    std::cout<<"this is the parent class method ";
  }
};
class childclass:public parentclass{
 public:
   void print(){
     std::cout<<"this is the child class function/method";
   }
};
int main(){
  parentclass parentobj;
  childclass childobj;
  childobj.print();
  parentobj.print();
  return 0;
}
