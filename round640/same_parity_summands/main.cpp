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
    while (tt--) {
      int n, k;
      cin >> n >> k;
      if (n % 2 == 0) {
        if (n == (k-1)*2 + (n-((k-1)*2)) && (n-((k-1)*2)) > 0) {

          cout << "YES" << endl;
          for (int i = 0; i < k -1; i++) {
            cout << "2 ";
          }
          cout << (n-((k-1)*2)) << endl;
          continue;
        }
      }
      if (n == (k-1) + (n-(k-1)) && n-(k-1) > 0 && (n-(k-1)) % 2 == 1) {
        cout << "YES" << endl;
        for (int i = 0; i < k -1; i++) {
          cout << "1 ";
        }
        cout << n-(k-1) << endl;
        continue;
      }
      cout << "NO" << endl;
    }

    return 0;
}
