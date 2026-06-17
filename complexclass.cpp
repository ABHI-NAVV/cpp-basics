#include<iostream>
class complex
 {
   public:
   int real,imag;
   complex(int real,int imag):real{real},imag{imag}
    {
      //this is the constructor body we used the initialization body to initialization
    }
    complex operator+( const complex& other)
        {
          return complex{real+other.real,imag+other.imag};
        }
    void display()
    {
      std::cout<<"\t the complex number is  :"<<real<<"+"<<imag<<"i";
      std::cout<<std::endl;
    }
 };
int main()
{
  int a,b;
  std::cout<<"enter the real and the imaginary part of the first complex number  : ";
  std::cin>>a>>b;
  complex obj{a,b};
  std::cout<<"\n enter the real and the imaginary part of the second complex number : ";
  std::cin>>a>>b;
  complex obj2{a,b};
  complex sum=obj+obj2;
  sum.display();
  return 0;
}
