#include<iostream>
class fraction
  {
    public:
    int numerator;
    int denominator;
   inline  static int count=0;
    fraction(int numerator,int denominator): numerator{numerator},denominator{denominator}
      {
        if(numerator==denominator)
        {
          numerator=1;
          denominator=1;
        }
        if(denominator==0)
        {
          numerator=0;
          denominator=0;
        }
        count++;
      }
    void print()
    {
      std::cout<<"the fraction "<<numerator<<"/"<<denominator;
    }
    fraction operator+(const fraction& other)
    {
      if(denominator==other.denominator)
      {
       return fraction{numerator+other.numerator,denominator};
      }
       else{
        return fraction{denominator*other.numerator+numerator*other.denominator,denominator*other.denominator};
      }
    }
    fraction operator-(const fraction& other)
    {
      if(denominator==other.denominator)
      {
        return fraction{numerator-other.numerator,denominator*other.denominator};
      }
      else
      {
        return fraction{denominator*other.numerator-numerator*other.denominator,denominator*other.denominator};
      }
    }
  };
int main()
{
  int n,d;
  std::cout<<"enter the denominator and the numerator of the fraction";
  std::cin>>n>>d;
  fraction frac1{n,d};
  std::cout<<"enter the numerator and the denominator of the function";
  std::cin>>n>>d;
  fraction frac2{n,d};
  fraction sum=frac1+frac2;
  fraction diff =frac1-frac2;
  std::cout<<"\n the sum of the fractions is ";
  sum.print();
  std::cout<<"\n the difference of the fractions is ";
  diff.print();
  std::cout<<"\nthe number of times the class was instatiated is :"<<fraction::count;
  return 0;
}
