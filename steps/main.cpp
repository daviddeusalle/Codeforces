#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

double product(double A[2], double B[2]) {
  return A[0] * B[0] + A[1] * B[1];
}

int main() {
    fastread();
    int n, m;
    int x, y;
    int k;
    cin >> n >> m;
    cin >> x >> y;
    cin >> k;
    int steps = 0;
    for (int i = 0; i < n; i++) {
      int dx, dy;
      cin >> dx >> dy;
      int xc, yc;
      if (dx > 0) {
        xc = (n - x) / dx;
      } else if (dx == 0) {
        xc = 0;
      } else {
        xc = abs(x / dx);
      } 

      if (dy > 0) {
        yc = (m - y) / dy;
      } else if (dy == 0) {
         yc = 0;
      } else {
        xc = x / dx;
      } 

      int yc = (m - y) / dy;
      if (xc > yc) {
        x*=xc;
        y*=xc;
        steps += xc;
      } else {
        x*=yc;
        y*=yc;
        steps += yc;
      }
    }
    cout << steps << endl;
       
    return 0;
}
