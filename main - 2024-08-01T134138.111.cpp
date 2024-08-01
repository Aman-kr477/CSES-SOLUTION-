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
	ll n,target;
	cin>>n>>target;
	vector<ll>nums(n,0);
	ll mini=INT_MAX;
	for(int i=0; i<n; i++) {
		cin>>nums[i];
		mini=min(mini,nums[i]);
	}
	if(target<=mini)cout<<"IMPOSSIBLE"<<endl;
	else{
	ll start=-1,end=-1;
	unordered_map<ll,ll>mp;
	for(ll i=0; i<n; i++) {
		if(mp.find(target-nums[i])!=mp.end()) {
			start=mp[target-nums[i]];
			end=i+1;
		}
		mp[nums[i]]=i+1;
	}
	if(start==-1||end==-1) cout<<"IMPOSSIBLE"<<endl;
	else 	cout<<start<<" "<<end<<endl;
	}
	return 0;
}