#include<fstream>
#include<iostream>
#include<string>
int main()
{
std::ofstream myfile("/home/abhiew/abhiew/dsa/demo.txt");
myfile<<"first time doing the file handling in  any of the programming language";
std::string txtfromthedox;
std::getline(myfile,txtfromthedox,"\n");
std::cout<<txtfromthedox;
myfile.close();
return 0;
}

