#include<iostream>
#include<vector>
#include<map>
int main()
{
  std::vector<int> arry;
  std::cout<<"enter the array size";
  int temp;
  std::cin>>temp;
  int nums;
  for(int i=0;i<temp;i++)
  {
   std::cin>>nums;
   arry.push_back(nums);
  }
  std::map<int,int> freq;
  for(int i:arry)
  {
   freq[i]++;
  }
  for(const auto& [key,value]:freq)
  {
    std::cout<<"the key  is :"<<key<<"the value  is "<<value;
    std::cout<<"\n";
  }
  return 0;
}
