#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;



int main() {
  fastread();
  int tt;
  cin >> tt;
  while(tt--) {
    ll n, m, q;
    cin >> n >> m >> q;

    ll b[2];
    ll b1, b2;

    cin >> b1 >> b2;
    b[0] = min(b1,b2);
    b[1] = max(b1,b2);
    ll a;
    cin >> a;
    if (a < b[0]) {
      cout << (b[0] - 1) << endl; 
    } else if (a > b[1]) {
      cout << (n - b[1]) << endl;
    } else {
      int moves = 0;
      while(true) {
        b[0]++;
        b[1]--;
        moves++;
        if (b[0] == a || b[1] == a) {
          cout << moves << endl;
          break;
        }
        if ( abs(b[0]-a) > abs(b[1]-a)) {
          a--;
        } else if (abs(b[0]-a) < abs(b[1]-a)) {
          a++;
        }

      }

    }

  }
  return 0;
}
