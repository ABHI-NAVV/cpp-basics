#include<iostream>
class tempo{
  private:
    int temp;
  public:
    tempo(int temp): temp{temp}{
      std::cout<<"this is the constructor";
    }
    void tofah(){
    std::cout<<"the temparature that you entered in the celcius is the fahreinheit value of :"<< (temp*(9/5))+32;
    }
};
int main(){
  int temp;
  std::cout<<"enter the temparature in the celcius";
  std::cin>>temp;
  tempo t1{temp};
  t1.tofah();
  return 0;
}
