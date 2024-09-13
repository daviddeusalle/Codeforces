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
    int x[n];
    int max = 0;
    

    for (int i = 0; i< n; i++) {
      cin >> x[i];
    }

    if (n == 1){
      cout << 1 << endl;
      return 0;
    } 
    for (int i = 0; i < n; i++) {
      int curr = 1;
      int j = i;
      while (j > 0) {
        j--;
        if (x[j] > x[j +1]) {
          break;
        }
        curr++;
      }
      j = i;
      while (j < n-1) {
        j++;
        if (x[j] > x[j -1]) {
          break;
        }
        curr++;
      }
      if (curr > max) {
        max = curr;
      }
    }
    cout << max; 

    return 0;
}
