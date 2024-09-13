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
    int odd = 1;
    cin >> n;
    for (int i = 0; i <n; i++) {
      int a;
      cin >> a;
      if (a % 2 == 0){
        cout << (a/2) << endl;
  
      } else {
        cout << (odd ? int(floor((double)a/2)): int(ceil((double)a/2))) << endl;
        odd ^= 1;
      }
      
    }
    return 0;
}
