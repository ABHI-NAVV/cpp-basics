#include<iostream>
class node{
   int data;
   node* left;
   node* right;
   node(int data,node* left,node* right) :data{data},left{nullptr},right{nullptr}
   {
     //this is the constructor body
   }
};
class bst {
  
};
int main(){
  int nums;
  std::cout<<"enter the number of elements in the tree";
  std::cin>>nums;
  while(nums<0 || nums==0){
    std::cout<<"enter a valid  number retard";
    return 1;
  }
  return 0;
}

