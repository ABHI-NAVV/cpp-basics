#include <iostream>
#include <vector>
int countofelement(std::vector<int>& usarr,int target);
int main()
{
  int nums;
  std::cout<<"enter the number of elements in the array";
  std::cin>>nums;
  std::vector<int> userarray1;
  std::cout<<"enter the elements in the array :";
  for(int i=0;i<nums;i++)
  {
    int temp;
    std::cin>>temp;
    userarray1.push_back(temp);
  }
  int countofelement1;
  int target;
  std::cout<<"enter the element you want to search";
  std::cin>>target;
  countofelement1=countofelement(userarray1,target);
  std::cout<<"the number of times the elements repeat is  :"<<countofelement1;
  std::cout<<std::endl;
  return 0;
}
int countofelement(std::vector<int>& usarr,int target)
{
  int countoftimes=0;
  for(std::size_t i=0;i<usarr.size();i++)
  {
    if(usarr[i]==target)
    {
      countoftimes++;
    }
  }
  return countoftimes;
}
