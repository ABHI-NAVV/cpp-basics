#include<iostream>
class numbers
{
  public:
  int a;
  numbers(int a):a{a}{}
  numbers operator+(const numbers& obj)
  {
   return numbers(a+obj.a);
  }
  void display(){
    std::cout<<a;
    std::cout<<std::endl;
  }
};
int main()
{
  int a,b;
  std::cout<<"enter the two numbers that needs to be stored in the class";
  std::cin>>a>>b;
  numbers obj1(a);
  numbers obj2(b);
  numbers objsum=obj1+obj2;
  objsum.display();
  return 0;
}
