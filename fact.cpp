#include <iostream>
int factorial(int num);
int main()
  {
      int num;
      std::cout<<"enter the number for which you want to find the factorial of:"<<"\t";
      std::cin>>num;
      int f;
      f=factorial(num);
      std::cout<<"\n"<<"this is the factorial of the number :"<<f<<std::endl;
      return 0;
    }
int factorial(int n)
    {
      if(n==0)
        return 1;
      else {
        return n* factorial(n-1);
      }
    }
