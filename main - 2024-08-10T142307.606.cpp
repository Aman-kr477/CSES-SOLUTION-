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
    ll t;
    vector<pair<ll,ll>>arr;
    cin>>t;
    ll n=t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        arr.push_back({l,r});
    }
    vector<vector<ll>>nums(n,vector<ll>(3,0));
    for(int i=0;i<n;i++){
        nums[i][0]=arr[i].first;
        nums[i][1]=arr[i].second;
        nums[i][2]=i;
    }
    vector<ll>ans(n,0);
    ll roomc=0;
    sort(nums.begin(),nums.end());
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    for(ll i=0;i<n;i++){
        if(pq.empty()||pq.top().first>=nums[i][0]){
            roomc++;
            pq.push({nums[i][1],roomc});
            ans[nums[i][2]]=roomc;
        }
        else{
            ll vacatroom=pq.top().second;
            pq.pop();
              pq.push({nums[i][1],vacatroom});
            ans[nums[i][2]]=vacatroom;
        }
    }
    cout<<roomc<<endl;
      for(auto it:ans){
          cout<<it<<" ";
      }
    

    return 0;
}