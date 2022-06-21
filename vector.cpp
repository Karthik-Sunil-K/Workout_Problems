#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

int main(){
   std::vector<int> items={1,2} ;
   items.push_back(4);
   for (int i = 0; i < items.size(); i++)
   {
    cout<<items.back()<<endl;
   }
   
}