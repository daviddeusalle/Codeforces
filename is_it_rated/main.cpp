
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int n; 
    
    cin >> n;
    int last, flag = 0; 
    for (int i = 0; i < n; i++) {
      int prev, curr;
      cin >> prev >> curr;
      if (prev != curr) {
        cout << "rated";
        return 0;
      }
      if (i != 0 && last < curr) {
        flag = 1;
      }
      last = curr;
    }
    if (flag) {
      cout << "unrated";
      return 0;
    }
    cout << "maybe";


    return 0;
}
