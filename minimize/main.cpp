#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int n;
    cin >> n;
    for (int i = 0; i< n; i++) {
      int a, b;
      cin >> a >> b;
      int min = 1000;

      for (int c = a; c <= b; c++) {
        int res = (c-a) + (b-c);
        if (res < min) min = res;
      }
      cout << min << endl;

    }
    return 0;
}
