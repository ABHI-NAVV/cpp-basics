#include<iostream>
class rectangle
{ 
  public:
    int length;
    int breadth;
    rectangle(int l,int b) : length{l},breadth{b} 
    {
     std::cout<<"the constructor is invoked but the initialization done using the initialization statements not in the constructor";
    }
    void area()
    {
      std::cout<<"the area of the rectangle is this :"<<length*breadth;
      std::cout<<std::endl;
    }
    void perimeter()
    {
      std::cout<<"the perimeter of the rectangle is this :"<<2*(length+breadth);
      std::cout<<std::endl;
    }
};
int main()
{
 int length ,breadth;
 std::cout<<"enter the length and the breadth of the rectangle";
 std::cin>>length>>breadth;
 rectangle obj{length,breadth};
 obj.area();
 obj.perimeter();
 return 0;
}
