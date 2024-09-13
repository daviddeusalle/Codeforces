#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int n, a;
    int acc = 0; 
    cin >> n >> a;

    int x[n];
    for (int i = 0; i < n; i++) {
      cin >> x[i];
    }
    
    int left, right;
    a--;
    left = a;
    right = a+1;

    while(left >= 0) {
      if (x[left]) {
        if (a + (a -left) >= n || (a+(a-left) <n && x[(a-left) +a])) acc++;
      }
      left--;
    }
  

    while(right < n) {
      if (x[right]) {
        if ( a-(right-a) < 0 || (a-(right -a) >= 0 && x[a-(right-a)])) acc++;
      }
      right++;
    }
    cout << acc << endl;

    return 0;
}
