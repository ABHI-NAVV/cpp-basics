#include<iostream>
#include<unordered_map>
#include<vector>
int main()
{
  int nums;
  std::cout<<"enter the number of elements in the array";
  std::cin>>nums;
  std::vector<int> arr;
  std::unordered_map<int,int> freq;
  std::cout<<"enter the elements in the array";
  for(int i=0;i<nums;i++)
  {
    int elements;
    std::cin>>elements;
    arr.push_back(elements);
  }
  for(int n:arr)
  {
    freq[n]++;
  }
  for( const auto& [key,value]:freq)
  {
    std::cout<<"the key is "<<key<<"  the pair is "<< value;
    std::cout<<"\n";
  }
  std::cout<<std::endl;
  return 0;
}
