#include <iostream>
#include <vector>
using namespace std;


void print_vector(vector<int>);
vector<int> input_array(vector<int>items);

int main(){
   vector<int> items;
   input_array(items);
   
   return 0;
}

vector<int> input_array(vector<int>items){
   int a;
   cout<<"enter the array";
   for (int i = 0; i < 4; i++)
   {
    cin>>a;
    items.push_back(a);
   }
   print_vector(items);
   return items;
}
void print_vector(vector<int>items){
    for (int i = 0; i < items.size(); i++)
    {
        cout<<items[i]<<" ";
    }
    
}