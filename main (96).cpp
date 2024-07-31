/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool visited[7][7] = {false};
ll steps = 0, paths = 0;
ll reserved[49];
void solve(ll row, ll col) {
	// If the path reaches (6,0) and all cells are visited, we count it as a valid path
	if (row == 6 && col == 0) {
		if (steps == 48) paths++;
		return;
	}

	// Check if current cell is already visited
	if (visited[row][col]||
	        (col>=1 && col<=5 && !visited[row][col-1] && !visited[row][col+1])&&((row==0 && visited[row+1][col])||(row==6 && visited[row-1][col]))||
	        (row>=1 && row<=5 && !visited[row-1][col] && !visited[row+1][col]) &&((col==0 && visited[row][col+1])||(col==6 && visited[row][col-1]))||
	        (row>=1 && row<=5 && col>=1 && col<=5 && visited[row][col-1] && visited[row][col+1] && !visited[row-1][col] && !visited[row+1][col])||
	        (row>=1 && row<=5 && col>=1 && col<=5 && visited[row+1][col] && visited[row-1][col] && !visited[row][col-1] && !visited[row][col+1])
	   ) return;

	// touching  wall
//   if(){
//       return ;
//   }
//   if()
// {
//     return;
// }

//   // get stuck in the middle
//   if
//   return;
//   if(row>=1 && row<=5 && col>=1 && col<=5 && visited[row+1][col] && visited[row-1][col] && !visited[row][col-1] && !visited[row][col+1]){
//       return;
//   }
	// Mark the current cell as visited
	visited[row][col] = true;

	if(reserved[steps]!=-1) {
		// Recursive calls for each direction with boundary checks
		switch(reserved[steps]) {
		case 0:
			if (row > 0 && !visited[row - 1][col]) {
				steps++;
				solve(row - 1, col);  // move up
				steps--;
			}
			break;
		case 1:
			if (row < 6 && !visited[row + 1][col]) {
				steps++;
				solve(row + 1, col);  // move down
				steps--;
			}
			break;
		case 2:
			if (col > 0 && !visited[row][col - 1]) {
				steps++;
				solve(row, col - 1);  // move left
				steps--;
			}
			break;
		case 3:
			if (col < 6 && !visited[row][col + 1]) {
				steps++;
				solve(row, col + 1);  // move right
				steps--;
			}
			break;
		}
     	visited[row][col] = false;
		return ;

	}
	if (row > 0 && !visited[row - 1][col]) {
		steps++;
		solve(row - 1, col);  // move up
		steps--;
	}
	if (row < 6 && !visited[row + 1][col]) {
		steps++;
		solve(row + 1, col);  // move down
		steps--;
	}
	if (col > 0 && !visited[row][col - 1]) {
		steps++;
		solve(row, col - 1);  // move left
		steps--;
	}
	if (col < 6 && !visited[row][col + 1]) {
		steps++;
		solve(row, col + 1);  // move right
		steps--;
	}
	


	// Backtracking: unmark the current cell before going back
	visited[row][col] = false;
}

int main() {
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='?')    reserved[i]=-1;
		if(s[i]=='U')  reserved[i]=0;
		if(s[i]=='D') reserved[i]=1;
		if(s[i]=='L') reserved[i]=2;
		if(s[i]=='R') reserved[i]=3;
	}
	solve(0, 0);
	cout << paths << endl;
	return 0;
}
