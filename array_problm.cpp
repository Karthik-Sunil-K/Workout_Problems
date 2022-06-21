#include <iostream>
#include <array>
using std::cin;
using std::cout;
using std::endl;

void printarray(int a[],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }   
}

int main()
{
    int n=100;
    int i, array[n];
    cout<<"enter the limit"<<endl;
    cin>>n;
    cout<<"enter array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin >> array[i];
    }
    printarray(array,n);
    return 0;
}