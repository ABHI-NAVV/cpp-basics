#include<iostream>
#include<string>
class student{
  public:
    std::string name;
    int marks;
    student(std::string name,int mark) :name{name},marks{mark}{}
    bool operator>(const student& obj)
    {
      if(marks>obj.marks)
        return true;
      else {
        return false;
      }
    }
};
void printobj(const student& obj);
int main(){
  int marks;
  std::string name;
  std::cout<<"enter the name of the first student";
  std::getline(std::cin,name);
  std::cout<<"enter the mark of the student";
  std::cin>>marks;
  student s1(name,marks);
  std::cout<<"now enter the name  of the second student";
  std::getline(std::cin>>std::ws,name);
  std::cout<<std::endl;
  std::cout<<"enter the marks of the second student";
  std::cin>>marks;
  student s2(name,marks);
  student bigger=((s1>s2)?s1:s2);
  printobj(bigger);
  return 0;
}
void printobj(const student& obj){
  std::cout<<"now printing the topper amoung the two students";
  std::cout<<obj.name<<"\n"<<obj.marks;
}
