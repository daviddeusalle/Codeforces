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
      ll n, k; 
      cin >> n >> k; 
      ll res = (n)*((k-1)/(n-1));
      res += k - ((res*(n-1))/n);
      cout << res << endl;
    }

    return 0;
}
