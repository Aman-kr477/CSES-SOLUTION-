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
	ll n,t;
	cin>>n>>t;
	vector<ll>nums(n,0);
	for(ll i=0; i<n; i++) {
		cin>>nums[i];
	}
	while(t--) {
		ll a,b;
		cin>>a>>b;
		swap(nums[a-1],nums[b-1]);
		vector<ll>ind(n+1,0);
		for(ll i=0; i<n; i++) {
			ind[nums[i]]=i+1;
		}
		ll ans=0;
		for(ll i=1; i<=n; i++) {
			if(ind[i+1]<ind[i]) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}