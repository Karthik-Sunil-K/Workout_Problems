#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
//pow functions is used for calculating power of a number 
int main(){

    int base,exponent;
    cout<<"enter The base";
    cin>>base;
    cout<<"enter the exponent";
    cin>>exponent;
    double x= pow(base,exponent);
    cout<<x<<"\n";
    return 0;

}