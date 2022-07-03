// to_string example
#include <iostream>   // std::cout
#include <string> 
using namespace std;    // std::string, std::to_string

int main ()
{
 int a=5;
 
 int *p=&a;
 
 cout<<p<<endl;

 cout<<*p<<endl;
 cout<<&a;
}