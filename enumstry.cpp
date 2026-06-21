#include<iostream>
enum DIRECTION
{
  north ,south,east,west
};
int main()
    {
      DIRECTION d=DIRECTION::north;
      std::cout<<"the number value of the north is 0 "<<d;
      return 0;
    }
