#include<iostream>
void weirdfunc(int num);
int main()
{
  int num;
  std::cout<<"enter the number you want to compute in the weird algorithm";
  std::cin>>num;
  weirdfunc(num);
  std::cout<<std::endl;
  return 0;
}
void weirdfunc(int num){
  if(num==1){
    std::cout<<1<<"\t";
    return;
  }
  else if(num%2==0)
  {
    std::cout<<num<<"\t";
    weirdfunc(num/2);
  }
  else{
    std::cout<<num<<"\t";
    weirdfunc((num*3)+1);
  }
}
