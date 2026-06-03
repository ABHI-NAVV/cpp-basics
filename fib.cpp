#include <iostream>
void fibonocci(int num);
int main()
  {
    int num;
  std::cout<<"enter the number upto which you want to seee the fibonocci numbers :";
  std::cin>>num;
  fibonocci(num);
  return 0;
  }
void fibonocci(int num)
  {
    int f0,f1,f2;
    f0=0;
    f1=1;
    std::cout<<"the fibonocci numbers you want to see upto the limit is :";
    while(f0<num)
    {
        std::cout<<f0;
        std::cout<<"\t";
        f2=f1+f0;
        f0=f1;
        f1=f2;
      }
    std::cout<<std::endl;
  }
