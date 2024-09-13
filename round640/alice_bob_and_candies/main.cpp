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
      int n; 
      cin >> n; 
      int candies[n];
      for (int i = 0; i < n; i++) {
        cin >> candies[i];
      }

      
      int l = 0, r = n-1;
      int a = 0, b = 0;
      int moves = 0, curr = 0, sum = 0;
      while (1) {
        curr = 0;
        while (1) {
          if (l > r) {
            a += curr;
            break;

          }  
          curr += candies[l];
          
          l++;

          if (curr > sum) {
           sum = curr;
           a+= curr;
           break;
          }
        }
  
        moves++;

        if (l > r) break;
        curr = 0;

        while (1) {
          if (l > r) {
            b += curr;
            break;
          }  
          curr += candies[r];
          
          r--;

          if (curr > sum) {
           sum = curr;
           b+= curr;
           break;
          }

        }
        moves++;
        if (l > r) break;
      } 
      
      cout << moves << " " << a << " " << b << endl;  

    }
 
    return 0;
}
