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
      ll s, len;
      ll l, r = 0;
      cin >> len >> s;
      l = s;
      for (ll j = 1; j < len; j++) {
        s++;
        r+= s;
      }
      ll min = 100000000000;
      s = l;
      for (ll j = 1; j < len; j++) {
        if (abs(r -l) < min) {
          min = abs(r-l);
        } 
        s++;
        l+= s;
        r-= s;
      }
      cout << min << endl;

    }

    return 0;
}
