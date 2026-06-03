#include <iostream>
bool palindrome(int num,int rev);
int main()
    {
      int num;
      std::cout<<"enter the number you want to reverse";
      std::cin>>num;
      int rev=0;
      int temp=num;
      int d;
      while(temp>0)
          {
            d=temp%10;
            rev=(rev*10)+d;
            temp=temp/10;
          }
      std::cout<<"the reverse of the number is this  : " << rev;
      std::cout<<std::endl;
      bool checker1;
      checker1=palindrome(num,rev);
      if(checker1)
          {
            std::cout<<"this number is a palindrome";
          }
      else 
          {
            std::cout<<"this number is not a palindrome";
          }
      return 0;
    }
bool palindrome(int num, int rev)
    {
      if(num==rev)
        return true;
      else 
       return false;
    }
