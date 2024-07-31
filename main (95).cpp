/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll c = 0;
ll column[8] = {0};
ll diag1[15] = {0};  // 15 because row + col can go up to 14
ll diag2[15] = {0};  // 15 because row - col + 8 - 1 can go up to 14

void search(ll row, vector<vector<char>>& nums) {
    if (row == 8) {
        c++;
        return;
    }
    for (ll col = 0; col < 8; col++) {
        if (nums[row][col] == '.' && !column[col] && !diag1[row + col] && !diag2[row - col + 7]) {
            // Place the queen
            column[col] = diag1[row + col] = diag2[row - col + 7] = 1;
            search(row + 1, nums);
            // Backtrack
            column[col] = diag1[row + col] = diag2[row - col + 7] = 0;
        }
    }
}

int main() { 
    vector<vector<char>> nums(8, vector<char>(8));
    for (ll i = 0; i < 8; i++) {
        for (ll j = 0; j < 8; j++) {
            cin >> nums[i][j];
        }
    }
    
    search(0, nums);
    cout << c << endl;
    return 0;
}
