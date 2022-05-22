#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    cout<<fmax(10,3.25)<<endl;
    cout<<fmin(10,3.25)<<endl;
    cout<<ceil(4.123)<<endl; //approximating in forward 
    cout<<floor(4.123)<<endl; //approximatinf in backward
    cout<<trunc(44.34)<<endl; //approximatinf in backward
    return 0;
}