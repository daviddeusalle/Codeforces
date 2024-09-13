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
    int diff = 0;
    string res;
    for (int i = 0; i <n; i++) {
      int a = 0, g = 0;
      cin >> a >> g;
      if (a + diff <= 500) {
        diff += a;
        res += "A";
      } else {
        diff -= g;
        res+= "G";
      }
      
    }
    if (abs(diff)> 500) {
      cout << "-1" << endl; 
    } else { 
    cout << res << endl;
    }
    return 0;
}
