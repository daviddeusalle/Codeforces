#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int t;

    cin >> t;


    for (int i = 0; i< t; i++) {
      ll n, m;
      cin >> n >>m;
      map<ll,int> a;
      for (int j = 0; j < n; j++) {
        ll num;
        cin >>num;
        if (a.count(num) == 0) {
          a[num] = 1;
        }
      }
      int size = a.size();
      int values[size];
      int index = 0;
      for (const auto& pair: a) {
  
        values[index] = pair.first;
        index++;
      }

      for (int j = 0; j< m; j++) {
        char s;
        ll l, r;
        cin >>s;
        cin >> l >> r;
        ll max = -1;
        for (int k = 0; k < size; k++) {
          if (l <= values[k] && values[k] <= r) {
            if (s == '+') values[k]++;
            else values[k]--;
          }
        
          if (max < values[k]) max = values[k];
        }
        cout << max << " ";

      }

      cout << endl;
    }
    return 0;
}

