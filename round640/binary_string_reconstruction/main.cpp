#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
  fastread();
  int tt;

  cin >> tt;
  while (tt--) {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int index=0;
    for (index = 0; index <= n2;index++) {
      if (index %2 == 0) {
        cout << '0';
      } else {
        cout << '1';
      }
    }

    if ( index % 2 == 0) {
       
      for (int i = 0; i <= n3; i++) {
        cout << '1';
      }
      
      for (int i = 0; i<= n1; i++) {
        cout << '0';
      }
    }

    if ( index % 1 == 0) {
       
      for (int i = 0; i <= n3; i++) {
        cout << '0';
      }
      
      for (int i = 0; i<= n1; i++) {
        cout << '1';
      }
    }


  }
  return 0;
}
