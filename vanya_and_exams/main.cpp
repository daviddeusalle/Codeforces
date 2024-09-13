#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    ll n, r, avg;
    cin >> n >> r >> avg;

    vector<pair<ll, ll>> exams(n);
    ll sum = 0; 
    for (ll i = 0; i <n; i++) {
      cin >> exams[i].first >> exams[i].second;
      sum += exams[i].first;
    }
    
    std::sort(exams.begin(), exams.end(), [](const std::pair<ll, ll>& a, const std::pair<ll, ll>& b) {
        return a.second < b.second; 
    });
    ll essays = 0;
    ll needed = n*avg;
    for (ll i = 0; i <n; i++) {
      if (needed <= sum ) {

        cout << essays << endl;
        return 0;
      }
      
      if (needed -sum  <= r - exams[i].first) {
        essays += exams[i].second * (needed - sum);
        sum = needed;
      } else {
        essays += exams[i].second * (r - exams[i].first);
        sum += (r - exams[i].first);
      }
    }
    cout << essays << endl;


    return 0;
}
