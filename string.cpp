#include <iostream>
#include <string>
int main()
  {
      std::string userstring;
      std::cout<<"enter the string you want to reverse"<<std::endl;
      std::cin>>userstring;
      std::string rev;
      rev="";
      int len=userstring.length();
      for(int i=len-1;i>=0;i--)
          {
            rev=rev+userstring[i];
          }
      std::cout<<"\t \nthis is the reversed string :"<< rev<<std::endl;
      return 0;
    }
