#include<iostream>
class point 
  {
    public:
      int x,y;
      point(int x,int y):x{x},y{y}
        {
          //this is the constructor body
        }
      point operator+(const point& other)
          {
           return point{(x+other.x),(y+other.y)};
          }
      void print()
      {
        std::cout<<"\n the coordinates are :"<<"("<<x<<","<<y<<")";
        std::cout<<std::endl;
      }
  };
int main()
{
  int a,b;
  std::cout<<"enter the coordinates of the first points";
  std::cin>>a>>b;
  point p1{a,b};
  std::cout<<"enter the coordinates of the second point";
  std::cin>>a>>b;
  point p2{a,b};
  point sum=p1+p2;
  sum.print();
  return 0;
}
