#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    string a;
    int k;
    cin >> a;
    cin >> k; 
    ll n = a.length();
    int i = 0;
    int best = 0, index = 0; 
    for (ll i = 0; i < n; i++) {
      if (k <= 0) break;
      best = 0;
      index = i;
      for (ll j = i; j <=i + k;  j++) {
        if (j == n) break;
        if ((a[j] - '0') > best) {
          best = (a[j] - '0');
          index = j;
        }
      }
      a.insert(i,1, a[index]);
      a.erase(index+1, 1);
      k -= (index-i);
    }
    cout << a << endl;
    return 0;
}
