/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll divisble(ll n){
   if(n==0) return 0;
   return n/5+divisble(n/5);
}
int main()
{
    ll n;
    cin>>n;
  
  cout<<divisble(n)<<endl;
   
    

    return 0;
}