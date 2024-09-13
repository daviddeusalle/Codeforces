#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

bool explore(int i, int j, char color, vector<vector<char>>& matrix, vector<vector<bool>>& visited, int i0, int j0) {
  
  if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size())
        return false;
  
  
  if (visited[i][j]) return true;


  if (matrix[i][j] != color) return false;
  visited[i][j] = true;

  return (i0 != i+1 && explore(i+1, j, color, matrix, visited, i, j))
    || (j0 != j+1 && explore(i, j+1, color, matrix, visited, i, j))
    || (i0 != i-1 && explore(i-1, j, color, matrix, visited, i, j))
    || (j0 != j-1 && explore(i, j-1, color, matrix, visited, i, j));
}

int main() {
    fastread();
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));


    for (int i = 0; i< n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];

        }
    }

    for (int i = 0; i< n; i++) {
        for (int j = 0; j < m; j++) {
          
          vector<vector<bool>> visited(n, vector<bool>(m, false));
          if (explore(i, j, matrix[i][j], matrix, visited, i, j)) {
            cout << "Yes" << endl;
             return 0; 
          }
        }
    }

    cout << "No" << endl;

    return 0;
}
