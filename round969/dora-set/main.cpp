#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;
      int res = (r-l+1) / 4;
      if (res == 0) {
        cout << "1" << endl;
      } else {
        cout << res << endl;
      }
    }
    return 0;
}

