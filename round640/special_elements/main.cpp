#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;


bool isSpecial(int a[], int l, int r, int val) {
  int sum = 0; 
  int last = l; 
  for (int i = l; i < r; i++) {
    if (a[i] == val) {
      sum = 0; 
      last = i+1;
      continue;
    }
    sum += a[i];
    
    while(sum > val) {
      sum -= a[last];
      last++;
    }

    if (sum == val) {
      return true;
    }
  }
  return false;
}

int main() {
  fastread();
  int tt;

  cin >> tt;
  while (tt--) {
    int n;
    cin >> n; 
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int specials= 0;
    for (int i = 0; i < n; i++) {
      specials+= isSpecial(a,0, i, a[i]) || isSpecial(a, i+1, n, a[i]);
    }
    cout << specials << endl;
  }
  return 0;
}
