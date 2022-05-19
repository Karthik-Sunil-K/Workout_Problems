#include <iostream>
using std::cout;
using std::cin;


void find_power(int base,int exp){
    int i;
    int resul=1;
    for ( i = 0; i < exp; i++)
    {
        resul=resul*base;
    }
    cout<<"the "<<base<<" raised to the power "<<exp<<" = "<<resul;
}

int main(){
    int base,exp;
    cout<<"enter base:";
    cin>>base;
    cout<<"enter exponent:";
    cin>>exp;
    find_power(base,exp);
    return 0;
}