#include <iostream>
#include<vector>
#include <string>
class student
{
 public:
   int id;
   std::string name;
   student(int studentid,std::string studentname) :id{studentid},name{studentname}
   {
     std::cout<<"the body of the constructor is executed here for how many times the class is instantinated :\t";
   }
};
void printdetails(std::vector<student>& classofthestudents);
int main()
{
  int nums;
  std::string studentname;
  int idofthestudent;
  std::cout<<"enter the number of students in the class :";
  std::cin>>nums;
  std::vector<student> classstudents;
  std::cout<<"enter the details of the student in the class  :\n";
  for(int i=0;i<nums;i++)
  {
    std::cin>>idofthestudent;
    std::getline(std::cin,studentname);
    student studentobject(idofthestudent,studentname);
    classstudents.push_back(studentobject);
  }
  std::cout<<"now going to print all the details of the students :";
  printdetails(classstudents);
  std::cout<<"now enter the operation you want to do in the class of students :";
  std::cout<<"the operation you want to do 1) find the student \n2) delete the details of the student \n 3) enter the marks of the student :";
  return 0;
}
void printdetails(std::vector<student>& classofthestudents)
{
  std::cout<<"displaying the details of the student in the class :";
  for(std::size_t i=0;i<classofthestudents.size();i++){
    std::cout<<"the name of the "<<i+1<<"th student is :"<<classofthestudents[i].name;
    std::cout<<"the id of the student is :"<<classofthestudents[i].id;
    std::cout<<"\n";
  }
  std::cout<<std::endl;
}
