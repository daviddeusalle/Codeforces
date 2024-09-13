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
    
    for (int i = 0; i < n; i++) {
      double x, y, k;
      cin >> x >> y >> k;
      int res1 = ceil(double(x/k));
      int res2 = ceil(double(y/k));

      if (res1 > res2) {
        cout << res1*2-1 << endl;
      } else {
        cout << res2*2 << endl;
      }
    }

    return 0;
}
