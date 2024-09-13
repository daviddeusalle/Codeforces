#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int n;
    cin >> n;

    for (int i = 0; i <n; i++) {
      int r;
      cin >> r;
      int index[r];
      for (int j = 0; j < r; j++) {
        string notes;
        cin >> notes;
        for (int k = 0; k < 4; k++) {
          if (notes[k] == '#') index[j] = k +1; 
        }
      }
      for (int j = r-1; j >=0; j--) {
        cout << index[j] << " ";
      }
      cout << endl;
    }

    return 0;
}
