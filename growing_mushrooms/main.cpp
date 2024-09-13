#include <bits/stdc++.h>
#include <iomanip>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

struct Height {
  double height;
  int index;
};

bool compare(const Height &a, const Height &b) {
  return a.height > b.height;
}

int main() {
    fastread();
    ll n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<Height> h(n);
    for (ll i = 0; i < n; i++) {
      ll a, b;
      cin >> a >> b;
         
      double growth1 = a * t1 * (1 - k / 100.0) + b * t2;
      double growth2 = b * t1 * (1 - k / 100.0) + a * t2;
      h[i].height = max(growth1, growth2);
      h[i].index = i +1;
    }
    sort(h.begin(),h.end(), compare);

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
      cout << h[i].index << " " << h[i].height << endl;
    }
    return 0;
}
