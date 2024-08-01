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
	ll x,n;
	cin>>n>>x;
	vector<ll>nums(n,0);
	for(ll i=0; i<n; i++) {
		cin>>nums[i];
	}
	ll c=0;
	sort(nums.begin(),nums.end());
	ll low=0,high=n-1;
	while(low<=high) {
		if(nums[low]+nums[high]<=x) {
			c++;
			low++;
			high--;
		}
		else {
			c++;
			high--;
		}
	}
	cout<<c<<endl;
	return 0;
}