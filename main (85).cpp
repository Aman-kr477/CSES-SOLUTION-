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
   int n;
   cin>>n;
   for(ll i=0;i<1<<n;i++){
       ll val=i^(i>>1);
       bitset<32>foo(val);
       string s=foo.to_string();
       for(ll i=32-n;i<32;i++){
           cout<<s[i];
       }
       cout<<endl;
   }

    return 0;
}