#include <iostream>
using std::cout;
using std::cin;

int power(int base1,int expo1){
    int result =1;
    for (int i = 1; i <=expo1; i++)
    {
        result=result*base1;
    }
    
    return result;
}

int main(){
    int base;
    int exponent;
    int answer;
    cout<<"enter The base";
    cin>>base;
    cout<<"enter the exp";
    cin>>exponent;
    answer=power(base,exponent);
    cout<<"\nthe result is="<<answer;
    return 0;
}