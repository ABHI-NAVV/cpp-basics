#include <iostream>
#include <string>
#include <cctype>
bool palindromeornot(std::string userinput);
int main()
  {
      int number;
      std::string inputstring1;
      std::cout<<"enter the string you want to find the palindrome of"<<std::endl;
      std::cin>>inputstring1;
      bool b= palindromeornot(inputstring1);
      if(b)
      {
        std::cout<<"this string is a palindrome";
      }
      else {
        std::cout<<"this string is not a palindrome";
      }
      return 0;
    }
bool palindromeornot(std::string userinput)
{
 std::string rev;
 rev="";
 int len;
 len=userinput.length();
 for(char& c: userinput)
    {
      c=std::tolower(c);
    }
 for(int i=len-1;i>0;i--)
    {
      rev= rev+userinput[i];
    }
 if(rev==userinput)
    {
      return true;
    }
 else 
 {
   return false;
 }
}
