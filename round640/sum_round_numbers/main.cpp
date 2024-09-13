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
      string n = "";
      cin >> n;
      vector<int> vals(n.length(), 0);
      int acc = 0;
      for (int i = 0; i< n.length(); i++) {
        if (n[i] != '0') {
          acc++;
        }
        vals[i] = n[i] - '0';
      } 
      cout << acc << endl;
      for (int i = 0; i <n.length(); i++) {
        if (vals[i]!= 0) {
          string zeros(n.length() -i  -1, '0');
          cout << vals[i] << zeros << ' ';
        }
      }
      cout << endl;
    } 

    return 0;
}
