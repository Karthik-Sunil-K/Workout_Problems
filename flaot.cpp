#include <iostream>
#include <float.h>
using std::cout;
using std::cin;


int main(){
    float a=3.3333;
    double b=6.66666666;
    a=a*10000000000;
    b=b*100000000000;
    cout<<a<<std::endl;
    cout<<b<<std::endl;
    cout<<"\n";
    cout<<"trustable float digits Number = "<<FLT_DIG<<std::endl;
    cout<<"\n";
    cout<<"trustablendouble digits Number = "<<DBL_DIG<<std::endl;
    cout<<std::fixed<<a<<std::endl;
    cout<<"\n";
    cout <<std::fixed<<b<<std::endl;
    return 0;
}