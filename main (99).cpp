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
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	ll c=0;
	ll i=0,j=0;
	while(i<n) {

		if(nums[i]!=nums[j]) {
			c++;
			i=j;
		}
		else {
			while(j<n && nums[j]==nums[i]) j++;
		}
	}
	cout<<c<<endl;

	return 0;
}