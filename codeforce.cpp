#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int count,len,length;
    string name;
    cin>>name;
    len=name.length();
    length=name.length();
    for (int i = 0; i <length; i++)
    {
        for (int j = 0; i <length; j++)
        {
            cout<<name[j];
        }
        
    }
    cout<<len;
    if(len%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
return 0;
}