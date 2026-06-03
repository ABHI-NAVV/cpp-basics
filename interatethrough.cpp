#include <iostream>
#include <vector>
int main()
{
  int nums;
  std::vector<int> userarray1;
  std::cout<<"we have just declared the array of the vector without allocating the memory";
  std::cout<<"enter the number of elements in the array:";
  std::cin>>nums;
  int temp;
  for(int i=0;i<nums;i++)
      {
       std::cin>>temp;
       userarray1.push_back(temp);
      }
  std::cout<<"the elements have been stored to the array :";
  for( int i=0;i<nums;i++)
  {
    std::cout<<userarray1[i];
  }
  std::cout<<std::endl;
  return 0;
}
