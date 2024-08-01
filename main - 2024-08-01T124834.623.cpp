/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool comp(pair<ll,ll>&p1,pair<ll,ll>&p2){
    return p1.second<p2.second;
}
int main() {
	ll n;
	cin>>n;
	vector<pair<ll,ll>>arr;
	vector<ll>dept;
	ll i=0;
	while(i<n) {
		ll a,b;
		cin>>a>>b;
		arr.push_back({a,b});
		
		i++;
	}
	sort(arr.begin(),arr.end(),comp);


	ll movies=0,timeelaspse=0;
	for(int i=0;i<n;i++){
	    if(arr[i].first>=timeelaspse){
	        movies++;
	        timeelaspse=arr[i].second;
	    }
	}
	cout<<movies<<endl;
	return 0;
}