#include <iostream>
int main()
  {
      int num=5;
      int* pointertonum;
      pointertonum=&num;
      std::cout<<(*pointertonum);
      std::cout<<"this is the value of the variable acceseed using the pointer"<<std::endl;
      int& reftonum=num;
      std::cout<<"this is the value of the varible accessed using the reference type variable"<<reftonum;
      std::cout<<std::endl;
      return 0;
    }
