#include <iostream>
#include <vector>
void printarray(std::vector<int> usrarr);
int main()
  {
    int num;
    std::cout<<"enter the number of elements in the array";
    std::cin>>num;
    std::vector<int> array1(num);
    std::cout<<"enter the elements in the array";
    for(int i=0;i<num;i++)
    {
      std::cin>>array1[i];
    }
    printarray(array1);
    return 0;
  }
void printarray(std::vector<int> usrarr)
    {
      for(int i:usrarr)
      {
        std::cout<<i;
        std::cout<<"\t";
      }
      std::cout<<std::endl;
    }
