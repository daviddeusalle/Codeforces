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
    int t;
    cin >> t;
    for (int i = 0; i< t; i++) {
      int n; 
      cin >> n;
      int acc = 0;
      double coor[n][n];
      for (int j = 0; j < n; j++) {
        cin >> coor[j][0] >> coor[j][1];
      }
      for (int j = 0; j < n-2; j++) {
        for (int k = j+1; k <n -1; k++) {
          for (int l = k+1; l < n; l++) {
            double ab[2] = {coor[k][0] - coor[j][0], coor[k][1] - coor[j][1]};
            double ba[2] = {coor[j][0] - coor[k][0], coor[j][1] - coor[k][1]};

            double ac[2] = {coor[l][0] - coor[j][0], coor[l][1] - coor[j][1]};
            double ca[2] = {coor[j][0] - coor[l][0], coor[j][1] - coor[l][1]};

            double bc[2] = {coor[l][0] - coor[k][0], coor[l][1] - coor[k][1]};
            double cb[2] = {coor[k][0] - coor[l][0], coor[k][1] - coor[l][1]};
            if (fabs(product(ab, ac)) == 0 || 
                fabs(product(ba, bc)) == 0 ||
                fabs(product(ca, cb)) == 0) {
              acc++;
            }
          }
        }
      }
      cout << acc << endl;
    }
    return 0;
}
