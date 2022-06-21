#include <iostream>
#include <vector>
// using std::cout;
// using std::cin;
// using std::endl;
using namespace std;



int main(){
   vector<int> items={1,2} ;
   vector<int> items1={3,4};
  for(int i=0;i<2;i++){
      swap(items[i],items1[i]);
   }
   for (int i = 0; i < 2; i++)
   {
     cout<<items[i];
   }
   

   
}



