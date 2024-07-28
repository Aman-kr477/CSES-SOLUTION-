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
   ll i=1;
   while(i<=n){
       ll total=((i*i)*((i*i)-1))/2;
       ll counter=4*(i-1)*(i-2);
       cout<<total-counter<<endl;
       
       i++;
   }

    return 0;
}