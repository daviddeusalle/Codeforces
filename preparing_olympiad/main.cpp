#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

#include <climits>

int main()
{
  fastread();
  int n, l, r, x;
  cin >> n >> l >> r >> x;
  int c[n];
  int subsets = 1 << n; 

  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  int acc = 0;
  for ( int mask = 0; mask < subsets; ++mask) {
    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; ++i) {
      if (mask & (1 << i)) {
        sum += c[i];
        max = std::max(max, c[i]);
        min = std::min(min, c[i]);
      }
    }
    if (__builtin_popcount(mask) > 1) {
      if (l <= sum && sum <= r && (max - min) >= x) {
        acc++;
      } 
    }
  }
  cout << acc << endl;
  return 0;

}
