#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;



int main() {
    fastread();
    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    if (vp >= vd) {
      cout << 0 << endl;
      return 0;
    }
    double time = c / vp;
    int jewels = 0;
    double s = (vd * (-t)/ (vp -vd));
    while (s < time) {
      double x = vp * s;
      s = (((vd*(-f)) -(2*x))/ (vp -vd)) + s;
      jewels++;
    }
    cout << jewels << endl;
    return 0; 
}
