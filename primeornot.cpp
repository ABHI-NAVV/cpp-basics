#include <iostream>
int main()
  {
      int num;
      std::cout<<"enter the number you want to check if it is prime or not";
      std::cin>>num;
      int count=0;
      for(int i=1;i<(num/2);i++)
          {
            if((num%i)==0)
            {
              count++;
            }
          }
      if(count>1)
      {
        std::cout<<"this number is not a prime"<<std::endl;
      }
      else if(count==1)
      {
        std::cout<<"this is a prime number";
      }
      else
          {
            std::cout<<"this is just checking";
          }
      return 0;
    }
