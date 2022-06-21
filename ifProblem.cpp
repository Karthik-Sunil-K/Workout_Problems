#include <iostream>
#include <float.h>
using std::cout;
using std::cin;


int main(){
    int m;
    cout<<"enter marks";
    cin>>m;

if (m>90)
{
    cout<<"grad is A";
}else if (m>80)
{
    cout<<"grad is b";
}else if (m>70)
{
    cout<<"grad is c";
}else{
    cout<<"grad is D";
}
    return 0;
}