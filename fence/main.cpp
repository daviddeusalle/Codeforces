#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

#include <climits>

int main()
{
  fastread();
  int n, k;
  cin >> n >> k;
  int min = INT_MAX;
  int index;
  int sum = 0;
  int h[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i]; 

    sum += h[i];
    if (i >= k -1) {
        sum -= h[i-k];

        if (sum < min) {
          min = sum;     
          index = i - k + 2;
        }
    }
  }
  cout << index << endl;
  return 0;

}
