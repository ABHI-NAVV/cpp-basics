#include <iostream>
#include <vector>
#include <string>
class students{
  public:
  int rollnum;
  std::string studentname;
  int mark1;
  students(int roll,std::string name,int mark1) 
                           :rollnum{roll},studentname{name},mark1{mark1}{
                           }
};
void bubblesortofstudents(std::vector<students>& studentdata){
  auto totalsize=studentdata.size();
  for(auto i=0;i<totalsize-1;i++)
  {
    for(auto j=0;j<totalsize-i-1;j++)
    {
      if(studentdata[j].mark1>studentdata[j+1].mark1)
      {
        students temp=studentdata[j];
        studentdata[j]=studentdata[j+1];
        studentdata[j+1]=temp;
      }
    }
  }
}
void printthedetails(std::vector<students>& studentdata)
{
  for(students studentobj:studentdata)
  {
    std::cout<<"the name of the student is :"<<studentobj.studentname<<"the roll number of the student is :"<<studentobj.rollnum<<"the mark of the student is :"<<studentobj.mark1;
  }
  std::cout<<std::endl;
}
int main()
{
  int nums;
  std::cout<<"enter the number of students in the class :";
  std::cin>>nums;
  std::cout<<"now enter the details of the students id and the student name and the total marks of all the subjects";
  std::vector<students> studentdetails;
  int roll;
  std::string name;
  int mark1;
  for(int i=0;i<nums;i++)
  {
    std::cin>>roll;
    std::cin>>name;
    std::cin>>mark1;
    students studentobject(roll,name,mark1);
    studentdetails.push_back(studentobject);
  }
  std::cout<<"\n now printing the details of the students in the order of the average marks ";
  bubblesortofstudents(studentdetails);
  printthedetails(studentdetails);
  return 0;
}
