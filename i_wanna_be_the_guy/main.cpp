#include <bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
  int n, i, j;
  int curr;
  cin >> n >> i;
  int x[n];
  for (j = 0; j < i; j++) {
    cin >> curr;
    x[curr-1] = 1;
  }
  cin >> i;
  for (j = 0; j < i; j++) {
   cin >> curr;
   x[curr-1] = 1;
  }

  for(j = 0; j < n; j++) {
    if (x[j] != 1) {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }
  cout << "I become the guy.";
  return 0;
}

