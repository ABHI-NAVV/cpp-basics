#include<iostream>
int main()
{
  try{
    std::cout<<"enter the age of the person you want to add to the voters list";
    int age;
    std::cin>>age;
    if(age<17)
    {
      throw (std::string{"this is not a valid age to be in the voters list"});;
  }
  else {
  std::cout<<" \n valid age";
  }
  }
  catch(std::string mesage)
  {
  std::cout<<"there is a exception in adding the person to the list :"<< mesage;
  }
  return 0;
}
