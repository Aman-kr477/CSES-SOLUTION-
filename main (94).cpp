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
    ll t;
    cin>>t;
    // we create power vector whih stores 10,100,1000,....10^18;
    vector<ll>powers(19,1);
    for(int i=1;i<19;i++){
        powers[i]=powers[i-1]*10;
    }
    while(t--){
        ll n;
        cin>>n;
        ll numdigit=0;
        ll digitlength=0;
        ll prevdigit=0;
      // it will be finding the range of the that number where it should lie .
        for(ll i=1;i<19;i++){
            digitlength+=(powers[i]-powers[i-1])*i;
            if(digitlength>=n){
                numdigit=i;
                break;
            }
            prevdigit=digitlength;
        }
      // now u get the range and u know how much digits they take -->so starting position will be :(mid-powers[numdigit-1])*numdigit+prevdigit+1;
        ll low=powers[numdigit-1];
        ll high=powers[numdigit]-1;
        ll ans=0;
        ll startposAns=0;
        while(low<=high){
            ll mid=(high+low)/2;
            ll startpos=(mid-powers[numdigit-1])*numdigit+prevdigit+1;
            if(startpos<=n){
                if(mid>ans){
                    ans=mid;
                    startposAns=startpos;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
      //after getting position we will give ans.
        string number=to_string(ans);
        cout<<number[n-startposAns]<<endl;
    }

    return 0;
}
