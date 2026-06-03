#include <iostream>
#include <vector>
int countodd(std::vector<int> usarr);
int counteven(std::vector<int> usarr);
int main()
    {
      std::vector<int> userarray1;
      int nums;
      std::cout<<"enter the number of elements in the array";
      std::cin>>nums;
      userarray1.resize(nums);
      std::cout<<"enter the elements in the arrray";
      for(int i=0;i<nums;i++)
          {
            std::cin>>userarray1[i];
          }
      int oddcount,evencount;
      oddcount=countodd(userarray1);
      evencount=counteven(userarray1);
      std::cout<<"the even numbers in the one is :"<< evencount<<"  the number of odd numbers is :"<<oddcount;
      std::cout<<std::endl;
      return 0;
    }
int counteven(std::vector<int> usarr)
{
  int counteven=0;
  for(size_t i=0;i<usarr.size();i++)
      {
        if(usarr[i]%2==0)
        {
          counteven++;
        }
      }
  return counteven;
}
int countodd(std::vector<int> usarr)
    {
      int countodd=0;
      for(size_t i=0;i<usarr.size();i++)
          {
            if(usarr[i]%2==1)
            {
              countodd++;
            }
          }
      return countodd;
    }
