#include <iostream>
#include <vector>
int linearsearch(std::vector<int>& usarr1,int target);
int main()
    {
      int nums;
      std::cout<<"enter the number of elements in the array";
      std::cin>>nums;
      std::vector<int> userarray1;
      std::cout<<"enter the elements in the array :";
      int temp;
      for (int i=0;i<nums;i++)
      {
        std::cin>>temp;
        userarray1.push_back(temp);
      }
      int target;
      std::cout<<"enter the number you want to find in the array";
      std::cin>>target;
      int posofnumber=-1;
      posofnumber=linearsearch(userarray1,target);
      if(posofnumber !=-1)
      {
        std::cout<<"the number is found at the postition in the array  "<<posofnumber+1<<std::endl;
      }
      else 
        {
         std::cout<<"the number is not found in the array  ";
        }
      return 0;
    }
int  linearsearch(std::vector<int>& usarr,int target)
{
  int pos;
  for(size_t i=0;i<usarr.size();i++){
    if(usarr[i]==target)
    {
      pos=i;
      return pos;
    }
  }
  return -1;
}
