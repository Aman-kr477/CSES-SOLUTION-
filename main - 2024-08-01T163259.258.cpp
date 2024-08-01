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
	vector<ll>nums(n,0);
	for(ll i=0; i<n; i++) {
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	ll x=1ll;
	for(ll i=0; i<n; i++) {
		if(nums[i]>x) {
			break;
		}
		x+=nums[i];
	}
	cout<<x<<endl;

	return 0;
}