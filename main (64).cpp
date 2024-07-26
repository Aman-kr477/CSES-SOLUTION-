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
    vector<ll>ans;
     ans.push_back(n);
    while(n!=1){
        if(n%2==0){
            n/=2;
            ans.push_back(n);
        }
        else{
            n=n*3+1;
            ans.push_back(n);
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }

    return 0;
}