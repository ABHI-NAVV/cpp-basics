#include<iostream>
enum class DISTANCE
{
  north,south,east,west
};
int main()
{
  DISTANCE D=DISTANCE::east;
  std::cout<<"the enum class does not degrade to the underlying type hence is preffered over the classic/old enums   ";
  std::cout<<"so we are using the static cast";
  std::cout<<static_cast<int>(D);;
  std::cout<<std::endl;
  return 0;
}
