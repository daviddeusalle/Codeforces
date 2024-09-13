#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
  ll n, k, res = 0;
  cin >> n >> k;
  ll mid = (n+1)/2;
  if (k <= mid) {
    res = 2*k - 1;
  } else { 
    res = (k - mid) * 2;
  } 
  cout << res << endl;
  return 0;
}

