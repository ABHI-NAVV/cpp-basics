#include<iostream>
#include<memory>
int main()
  {
   int* ptr=new int(8);
   void* ptrofvoid;
   ptrofvoid=static_cast<void*>(ptr);
   delete ptr;
   return 0;
  }
