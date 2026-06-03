#include <iostream>
#include <vector>
size_t  findlargest(std::vector<int> usarr);
size_t findsmallest(std::vector<int> usarr);
int main()
{
  int num;
  std::cout<<"enter the total number of elements in the array :";
  std::cin>>num;
  std::vector<int> array1(num);
  std::cout<<"enter the elements in the array";
  for(int i=0;i<num;i++)
      {
        std::cin>>array1[i];
      }
  size_t small,largest;
  small=findsmallest(array1);
  largest=findlargest(array1);
  std::cout<<"the largest element is found at the position   :"<<largest+1<<"   the smallest element is found at the position    :"<< small+1<<std::endl;
  return 0;
}
size_t findsmallest(std::vector<int> usarr)
    {
      size_t indexofsmall=0;

      for(size_t i=0;i<usarr.size();i++)
          {
            if(usarr[indexofsmall]>usarr[i])
            {
              indexofsmall=i;
            }
          }
      return indexofsmall;
    }
size_t findlargest(std::vector<int> usarr)
    {
      size_t indexoflarge=0;

      for(size_t i=0;i<usarr.size();i++)
          {
            if(usarr[indexoflarge]<usarr[i])
            {
              indexoflarge=i;
            }
          }
      return indexoflarge;
    }
 
