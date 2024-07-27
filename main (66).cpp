/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0,j=0;
    unordered_map<int,int>mp;
    int maxi=0;
    while(j<s.size()){
    mp[s[j]]++;
    if(mp.size()>1){
        while(mp.size()>1){
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            i++;
        }
    }
    maxi=max(maxi,j-i+1);
    j++;
    }
    cout<<maxi<<endl;
    return 0;
}