/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>nums;
void TOH(int i,int x,int y,int z){
    if(i==0) return;
    TOH(i-1,x,z,y);
    nums.push_back({x,z});
   
    TOH(i-1,y,x,z);
}

int main()
{ 
  int n;
  cin>>n;
  TOH(n,1,2,3);
  cout<<nums.size()<<endl;
  for(auto it:nums){
      cout<<it.first<<" "<<it.second<<endl;
  }

    return 0;
}