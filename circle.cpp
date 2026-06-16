#include<iostream>
class circle{
  private:
    int radius;
  public:
    circle(int radius) :radius{radius}
    {
      std::cout<<"contructor initialized";
    }
    void  area(){
      std::cout<<"the area of the circle is :"<<3.14*radius*radius;
    }
    void circumference(){
      std::cout<<"the circumference of the circle is :"<<2*3.14*radius;
    }
    ~circle(){
      std::cout<<"destructor";
      std::cout<<std::endl;
    }
};
int main(){
  int radius;
  std::cout<<"enter the radius of the circle ";
  std::cin>>radius;
  circle c1{radius};
  c1.area();
  c1.circumference();
  return 0;
}

