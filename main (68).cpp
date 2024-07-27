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
   ll moves=0;
   vector<ll>ans(n,0);
   for(int i=0;i<n;i++){
       ll x;
       cin>>x;
       ans[i]=x;
   }
   for(int i=1;i<n;i++){
      if(ans[i-1]>ans[i]){
          moves+=abs(ans[i-1]-ans[i]);
          ans[i]=ans[i-1];
      } 
   }
   cout<<moves<<endl;
   
    return 0;
}