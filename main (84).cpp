/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

string solve (string s){
   vector<int>mp(26,0);
   for(auto it:s){
       mp[it-'A']++;
   }
   ll oddcount=0;
 
 
  char oddalpha;
 ll oddc=0;
  for(int i=0;i<26;i++){
      if(mp[i]%2!=0) {
          if(oddcount<1){
              oddalpha=char(i+'A');
              
          }
          else{
              return "NO SOLUTION";
          }
          oddcount++;
      }
  }
 
   string ans="";
   for(int i=0;i<s.size();i++) ans+='$';
  
   int j=0,k=s.size()-1;
   for(int i=0;i<26;i++){
       // cout<<char(i+'A')<<" "<<mp[i]<<endl;
       if(mp[i]!=0 && mp[i]%2==0){
           while(mp[i]>0){
             
               ans[j]=char(i+'A');
               ans[k]=char(i+'A');
               mp[i]-=2;
              
               j++;
               k--;
           }
       }
      else  if(mp[i]!=0){
           oddc=mp[i];
       }
   }
  
   if(oddcount==1){
       while(oddc>0){
          
           ans[j]=oddalpha;
           ans[k]=oddalpha;
           j++;
           k--;
           oddc--;
       }
   }
   return ans;
}
int main()
{
   string s;
   cin>>s;
   cout<<solve(s)<<endl;
    return 0;
}