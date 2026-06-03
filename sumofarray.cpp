#include <iostream>
#include <vector>
int findsum(std::vector <int> usarr);
int main()
    {
      int num;
      std::cout<<"enter the number of elements in the array";
      std::cin>>num;
      std::vector <int> array1(num);
      int sum;
      std::cout<<"enter the elements in the array";
      for(int i=0;i<num;i++)
            {
              std::cin>>array1[i];
            }
      sum=findsum(array1);
      std::cout<<"the sum of the elements of the array is  :"<<sum<<"the average of the elements is  :  "<<(sum/num)<<std::endl;
      return 0;
    }
int findsum(std::vector <int> usarr)
{
  int sum=0;
  for(int in:usarr)
  {
    sum+=in;
  }
  return sum;
}
