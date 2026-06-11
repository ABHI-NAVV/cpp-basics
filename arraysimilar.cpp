#include<iostream>
#include <vector>
#include <string>
bool comparearray(std::vector<int>& array1,std::vector<int>& array2);
int main()
{
  int nums;
  std::cout<<"enter the number of elements in the array";
  std::cin>>nums;
  std::vector<int> array1;
  std::vector<int> array2;
  int temp;
  std::cout<<"enter the elements in the first array";
  for(int i=0;i<nums;i++)
  {
    std::cin>>temp;
    array1.push_back(temp);
  }
  std::cout<<"\n enter the elements in the second array :";
  for(int i=0;i<nums;i++)
  {
    std::cin>>temp;
    array2.push_back(temp);
  }
  std::cout<<"now going to compare the two arrays :";
  bool similarornot=true;
  similarornot=comparearray(array1,array2);
  if(similarornot)
    std::cout<<"the both of the arrays are similar \t";
  else {
    std::cout<<"the both of the arrays is not similar ";
  }
  return 0;
}
void comparearray(std::vector<int>& array1,std::vector<int>& array2)
{
  bool similarornot=true;
  for(int ch:array1)
  {
    for(int i=0;i<array2.size();i++)
    {
      if(ch==array2[i])
        
      else 
        similarornot=false;
    }
  }
}
