#include<iostream>
#include<ctime>
#include<cstdlib>
void winnerornot(const char& choice,const char& computerchoice);
int main()
    {
    char choice;
    char computerchoice;
    srand(time(0));
    int randomnumber;
    randomnumber=rand()%3;
    if(randomnumber==0)
       computerchoice='r';
    else if(randomnumber==1)
      computerchoice='p';
    else 
      computerchoice='s';
    std::cout<<"\n enter the choice you want to play \t 1) rock -'n' \t 2) paper -'p' \t 3) scissor -'s'";
    std::cout<<std::endl;
    std::cin>>choice;
    winnerornot(choice,computerchoice);
    return 0;
    }
void winnerornot(const char& choice,const char& computerchoice)
{
  if(choice==computerchoice)
    std::cout<<"\033[33mITS A DRAW\033[0m ";
  else if( choice=='r' && computerchoice=='p')
    std::cout<<"\033[31mYOU LOOSE\033[0m";
  else if(choice=='r' && computerchoice=='s')
    std::cout<<"\033[32mYOU WIN\033[0m";
  else if(choice=='p' && computerchoice=='r')
    std::cout<<"\033[32mYOU WIN\033[0m";
  else if(choice=='p' && computerchoice=='s')
    std::cout<<"\033[31mYOU LOOSE\033[0m";
  else if(choice=='s' && computerchoice=='r')
    std::cout<<"\033[31mYOU LOOSE\033[0m";
  else if(choice=='s' && computerchoice=='p')
    std::cout<<"\033[32mYOU WIN\033[0m";
  std::cout<<std::endl;;
}
