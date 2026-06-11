#include<iostream>
#include <string>
class employee
{
  private:
    int empid;
    std::string name;
    int salary;
    double gross_salary;
  public:
    employee(int empid,std::string name,int salary): empid{empid},name{name},salary{salary}{
    }
   void  calculategross(){
      double hra=salary*0.6;
      double da=salary*0.3;
      double ta=salary*0.1;
      gross_salary=salary+hra+da+ta;
    }
   void displaydetails(){
     std::cout<<"the name ,basic salary,id of the employee is this :  "<<empid<<"\t"<<name<<"\t"<<salary<<"\t"<<"the gross salary is :  "<<gross_salary<<std::endl;
   }

};
int main(){
  int id;
  std::string name;
  int basicpay;
  std::cout<<"enter the employye id and the name and the basic pay of the employye ";
  std::cin>>id;
  std::cin.ignore();
  std::getline(std::cin,name);
  std::cin>>basicpay;
  employee emp{id,name,basicpay};
  emp.calculategross();
  emp.displaydetails();
  return 0;
}
