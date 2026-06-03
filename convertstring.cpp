#include <iostream>
#include <string>
#include <cctype>
void tolower1(std::string& us);
void toupper1(std::string& us);;
void printstring1(std::string& us);
int main()
  {
      std::string userstring;
      std::cout<<"enter the string you want to convert:  ";
      std::getline(std::cin,userstring);
      tolower1(userstring);
      printstring1(userstring);
      std::cout<<"the string after converting back is    :";
      toupper1(userstring);
      printstring1(userstring);
      return 0;
    }
void tolower1(std::string& us)
    {
      for(char& ch:us)
      {
        ch=tolower(ch);
      }
    }
void printstring1(std::string& us)
{
  std::cout<<us<<std::endl;
}
void toupper1(std::string& us)
    {
      for(char& ch:us)
      {
        ch=toupper(ch);
      }
    }
