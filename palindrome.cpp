#include <iostream>
#include <string>
bool ispalindrome(std::string s,std::string rev);
int main()
  {
      int len;
      std::string users;
      std::cout<<"enter the string you want to check if it is palindrome or not:"<<"\t";
      std::cin>>users;
      std::string rev;
      rev="";
      len=users.length();
      for(int i=len-1;i>=0;i--)
          {
           rev=rev+users[i];
          }
     bool check=ispalindrome(users,rev);
     if(check)
     {
       std::cout<<"this is a palindrome string"<<std::endl;
     }
     else {
       std::cout<<"this is not a palindrome"<<std::endl;
     }
     return 0;
    }
bool ispalindrome(std::string s,std::string rev)
{
 if(rev==s)
 {
   return true;
 }
 else 
 {
   return false;
 }
}
