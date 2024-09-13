#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

double euclideanDistance(const array<int, 2>& point1, const array<int, 2>& point2) {
    return sqrt(pow(point2[0] - point1[0], 2) + pow(point2[1] - point1[1], 2));
}

int main() {
    fastread();
    int n, m;
    int acc = 0;
    cin >> n >> m;
    int counts[n] = {0};
    int s[n][n];
    for (int i =0; i<m; i++) {
      int a, b; 
      cin >> a >> b;
      counts[a -1]++;
      s[a-1][b-1] = 1;
      counts[b-1]++;
    }
    int flag = 1;
    while (flag) {
      flag = 0;
      cout << "BEFORE" << endl;
      for (int i = 0; i<n; i++) {
        cout << counts[i] << endl;
      }
      cout << endl << endl;
      int eliminate[n] = {0};
      for (int i = 0; i< n; i++){
        if (counts[i] == 1) {
          flag = 1;
          for (int j = 0; j <n; j++) {
            if (s[i][j] == 1) {
              s[j][i] = 0;
              eliminate[j]++;
            }
          }
          counts[i]--;
        }
      }
      for(int i = 0; i < n; i++) {
        if (eliminate[i] > 0) {
          counts[i] -= eliminate[i];
        } 
      }
      for (int i = 0; i<n; i++) {
        cout << counts[i] << endl;
      }
      if (flag) acc++;
    }
    cout << acc << endl;

   
    return 0;
}

