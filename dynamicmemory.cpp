#include<iostream>
#include<memory>
int main()
    {
      int* ptr;
      ptr=new int(6);
      std::cout<<"the value stored in the pointer is :"<<*ptr;
      std::cout<<"the address of the ptr is :"<<ptr;
      std::cout<<std::endl;
      delete ptr;
      std::cout<<"now we have used the delete keyword to free the memory";;
      return 0;
    }
