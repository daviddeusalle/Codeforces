#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;



int main()
{
    fastread();
    int n, m;
    cin >> n >> m;
    int debt[n][2];
    memset(debt, 0, sizeof(debt));
    
    int acc = 0;
    for (int i = 0; i <m; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      debt[a-1][0] += c;
      debt[b-1][1] += c;
    }

    for (int i = 0; i <n; i++) {
      int curr = debt[i][0]-debt[i][1];
      acc += curr > 0 ? curr : 0;
    }
    cout << acc << endl;
    
    return 0;
}

