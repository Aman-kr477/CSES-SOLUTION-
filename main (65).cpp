/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    vector<ll>ans(n,0);
    ll xor1=0;
    for(ll i=0;i<n-1;i++){
        ll x;
        cin>>x;
        xor1^=x;
    }
    for(ll i=1;i<=n;i++){
        xor1^=i;
    }
    cout<<xor1<<endl;

    return 0;
}