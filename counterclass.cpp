#include<iostream>
class counter{
  private :
    int value;
  public:
    counter(int value):value{value}{
      std::cout<<"\nthe constructor initialized for the object\n";
    }
    void increment(int t){
      value+=t;
      std::cout<<"increased the value of the variable by the value of the   :"<<t<<"now the value is   :"<<value;
    }
    void decrement(int t){
      value-=t;
      std::cout<<"the new value after decreasing is  : "<< value;
    }
  void getcount(){
    std::cout<<"the value of the variable is  :"<<value;
  }
};
int main(){
  int nums;
  int t;
  std::cout<<"enter the value of the variable in the initial stage\n";
  std::cin>>nums;
  counter c1{nums};
  std::cout<<"enter the operation you want to do in the variable 1) increment \n2)decrement \n3) see the value of the variable    \n";
  int choice;
  std::cin>>choice;
  switch (choice) {
    case 1:std::cout<<"enter the number you want to add";
          std::cin>>t;
           c1.increment(t);
           break;
    case 2:std::cout<<"enter the number you want to substract";
           std::cin>>t;
           c1.decrement(t);
          break;
    case 3:std::cout<<"displaying the details";
          c1.getcount();
           break;
    default:std::cout<<"this is the default block \n enter a valid choice";
            break;
  }
  return 0;
}
