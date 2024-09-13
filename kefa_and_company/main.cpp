#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> friends(n);
    for (ll i = 0; i < n; i++) {
      cin >> friends[i].first >> friends[i].second; 
    }
    sort(friends.begin(), friends.end());
    ll friendship= 0, max= 0, last = 0;
    for (ll i = 0;i < n; i++) {
      friendship += friends[i].second;
      while (friends[i].first - friends[last].first >= d) {
        friendship-= friends[last].second;
        last++;
      }
      if (friendship > max) max = friendship;
    }
    cout << max << endl;
    return 0;
}
