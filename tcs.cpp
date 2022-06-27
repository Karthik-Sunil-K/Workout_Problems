#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, a = 0, b = 3, re, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            a = a + 2;
            if (i == 1)
            {
                b = 3;
            }
            else
            {
                b = b + 4;
                re = a * b;
            }
            cout <<setw(5)<<setfill('0')<<re;
        }
        cout << "\n";
    }
    return 0;
}
