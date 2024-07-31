/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> applicant(n);
    vector<ll> apartment(m);
    
    for (int i = 0; i < n; i++) {
        cin >> applicant[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> apartment[i];
    }
    
    sort(applicant.begin(), applicant.end());
    sort(apartment.begin(), apartment.end());
    
    ll c = 0;
    ll i = 0, j = 0;
    
    while (i < n && j < m) {
        if (abs(apartment[j] - applicant[i]) <= k) {
            c++;
            i++;
            j++;
        } else if (apartment[j] < applicant[i]) {
            j++;
        } else {
            i++;
        }
    }
    
    cout << c << endl;
    
    return 0;
}
