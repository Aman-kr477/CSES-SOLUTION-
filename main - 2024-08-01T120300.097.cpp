/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
	ll n;
	cin>>n;
	vector<ll>arr;
	vector<ll>dept;
	ll i=0;
	while(i<n) {
		ll a,b;
		cin>>a>>b;
		arr.push_back(a);
		dept.push_back(b);
		i++;
	}
	sort(arr.begin(),arr.end());
	sort(dept.begin(),dept.end());

	ll maxi=0,j=0,customer=0;
	i=0;
	while(i<n && j<n) {
		if(arr[i]<dept[j]) {
			customer++;
			maxi=max(maxi,customer);
			i++;

		}
		else {
			j++;
			customer--;
		}
	}
	cout<<maxi<<endl;
	return 0;
}