#include<iostream>
class node
{
  public:
    int data;
    node* next;
  node(int data) : data{data} , next{nullptr}
  {
    //this is the node constructor
  }
};
class linkedlist{
  node* head;
  public:
   linkedlist(){
     head=nullptr;
   }
  void insertatstart(int value){
    node* newnode=new node(value);
    newnode->next=nullptr;
    newnode->data=value;
    head=newnode;
  }
  void printlist(){
    std::cout<<"the elements in the linked list is ";
    while(head!=nullptr){
    std::cout<<"\n";
    std::cout<<head->data;
    head=head->next;
  }
  }
};
int main()
{
  int num;
  int data;
  std::cout<<"enter the number of nodes in the linked list";
  std::cin>>num;
  linkedlist l1;
  for(int i=0;i<num;i++)
      {
        std::cout<<"enter the data in the linked list at the "<<i<<"th position";
        std::cin>>data;
        l1.insertatstart(data);
      }
  l1.printlist();
  return 0;
}
