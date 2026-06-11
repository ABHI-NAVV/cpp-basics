#include<iostream>
#include<vector>
#include<string>
class bankacc
{
  private:
    size_t accno=0;
    std::string name;
    long long amount;
  public:
    bankacc(std::size_t accno,std::string name,long long amount) : accno{accno},name{name},amount{amount}
    {
      //constructor body without any statements 
    }
    void deposit(long long depo)
    {
      if(depo>0)
        amount+=depo;
      else {
        std::cout<<"enter a valid amound to deposit the amount you have entered is not valid";
      }
    }
    void withdraw(int withdrawa)
    {
      if(amount-withdrawa<0)
        std::cout<<"this is not a permitted trassmission the balance is not sufficiant to withdraw this amount";
      else {
        amount-=withdrawa;
      }
    }
    void showbalence()
    {
    std::cout<<"the balence for the the account number  "<< accno<<" the name of the holder  "<<name<<" the balance amount is   "<< amount;
    }
};
int main(){
  std::size_t accno;
  std::string name;
  long long amount,balance;
  std::cout<<"enter the id and the balance in the bank account and the name of the account holder ";
  std::cin>>accno>>balance;
  std::getline(std::cin,name);
  bankacc accountobj{accno,name,balance};
  int choice;
  std::cout<<"enter the operation you want to do in the account \n 1) deposit \n 2) withdraw\n 3)view the balance \n 4)exit ";
  std::cin>>choice;
  switch(choice)
  {
    case 1: std::cout<<"enter the amount you want to deposit in the account";
            std::cin>>amount;
            accountobj.deposit(amount);
            break;
    case 2: std::cout<<"enter the amount you want to withdraw from the account ";
            std::cin>>amount;
            accountobj.withdraw(amount);
            break;
    case 3: std::cout<<std::endl;
            accountobj.showbalence();
            break;
    case 4: exit(0);
            break;
    default:std::cout<<"enter the valid choice this is not a valid chooice ";
            break;
  }
  return 0;
}
