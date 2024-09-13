#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int n, a;
    ll acc = 0; 
    cin >> n >> a;
    ll x[n];
    ll c[n];
    ll f[n];
    std::vector<std::pair<ll, ll>> pairs(n);
    for (int i = 0; i < n; i++) {
      cin >> x[i];
      cin >> c[i];
      
      f[i] = (c[i] > 2*x[i] ? 2*x[i] : c[i]);
      x[i] = (c[i] > x[i] ? x[i] : c[i]);
      pairs[i] = std::make_pair(x[i], f[i]);
    }

    std::sort(pairs.begin(), pairs.end(), [](const std::pair<ll, ll>& a, const std::pair<ll, ll>& b) {
        return a.second > b.second; // Orden descendente
    });

    for (int i = 0; i < n; i++) {
      
      if (i < a) {
        acc += pairs[i].second;
      } else {
        acc += pairs[i].first;
      }

    }
    cout << acc << endl;
    return 0;
}
