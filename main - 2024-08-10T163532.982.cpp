/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool check(ll mid,vector<ll>& nums,ll t){
    ll sum=0;
    for(ll i=0;i<nums.size();i++){
        sum+=mid/nums[i];
    }
    if(sum>=t) return true;
    return false;
}
int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>nums(n,0);
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        maxi=max(maxi,nums[i]);
    }
    ll low=1,high=maxi*t,ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid,nums,t)==true){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
     cout<<ans<<endl;
    return 0;
}