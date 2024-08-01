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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,t;
	cin>>n;
	vector<ll>nums(n,0);
	for(ll i=0; i<n; i++) {
		cin>>nums[i];
	}
	ll i=0,j=0,maxi=0;
	map<ll,ll>mp;
	while(j<n){
	    mp[nums[j]]++;
	    while(mp[nums[j]]>1){
	        mp[nums[i]]--;
	       
	        if(mp[nums[i]]==0) mp.erase(nums[i]);
	         i++;
	    }
	    maxi=max(maxi,j-i+1);
	    j++;
	}
	cout<<maxi<<endl;
    
	return 0;
}