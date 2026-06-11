#include <iostream>
#include<vector>
void sortedornot(std::vector<int>&  usarr1);
int main()
{
  int nums;
  std::cout<<"enter the number of elements in the array";
  std::cin>>nums;
  std::vector<int> usarr1;
  std::cout<<"enter the elements of the array";
  for(int i=0;i<nums;i++)
  { 
    int temp;
    std::cin>>temp;
    usarr1.push_back(temp);
  }
  sortedornot(usarr1);
  return 0;
}
void sortedornot(std::vector<int>& usarr1)
{
  bool thisarrayissorted=true;
  for(size_t i=0;i+1<usarr1.size();i++)
  {
    if(usarr1[i]>usarr1[i+1])
    {
      thisarrayissorted=false;
    }
  }
  if(thisarrayissorted)
  {
    std::cout<<"this array is a sorted array";
  }
  else {
    std::cout<<"this array is not a sorted array";
  }
}
