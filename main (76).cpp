/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
ll power(ll base,ll expo){
    ll ans=1;
    while(expo){
        if(expo & 1ll){
            //odd hai
            ans=(ans*base)%mod;
        }
        base=(base*base)%mod;
        expo>>=1ll;
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
  cout<<power(2ll,n)%mod<<endl;
   
    

    return 0;
}