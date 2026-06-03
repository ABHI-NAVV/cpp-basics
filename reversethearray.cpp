#include <iostream>
#include <vector>
void reversethearray(std::vector<int>& usarr1);
void printarray(const std::vector<int>& usarr1);
int main()
    {
      int nums;
      std::cout<<"enter the number of elements in the array:  ";
      std::cin>>nums;
      std::vector<int> usarr1;
      std::cout<<"enter the elements in the array :   ";
      for(int i=0;i<nums;i++)
      {
       int temp;
       std::cin>>temp;
       usarr1.push_back(temp);
      }
      reversethearray(usarr1);
      printarray(usarr1);
      return 0;
    }
void reversethearray(std::vector<int>& usarr1)  {
  std:: size_t start=0;
  std::size_t end=usarr1.size()-1;
  while(start<end)
  {
    int temp;
    temp=usarr1[start];
    usarr1[start]=usarr1[end];
    usarr1[end]=temp;
    start++;
    end--;
  }
}
void printarray(const std::vector<int>& usarr1)
{
  std::cout<<"printing the elements of the array : ";
  for(int i:usarr1)
  {
    std::cout<<i<<"  ";
  }
  std::cout<<std::endl;
}
