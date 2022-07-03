#include <bits/stdc++.h>
using namespace std;

int main()
{

   int i,j,n;
   int bin[32];
   cin>>n;
   i=0;
  for (int n = 0; 0 < n; n/=2)
  {
    bin[i]=n%2;
    n=n/2;
    i++;
  }
  cout<<i<<n;
   cout<<"Binary\n";
   for(j=n-1;n>=0;n--){
    cout<<bin[j];
   }
   
    
}