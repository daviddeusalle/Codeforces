#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;



int main()
{
    fastread();
    ll n, a, b;
    cin >> n >> a >> b;
    
    for (ll i = 0; i< n; i++) {
      ll x;

      cin >> x;
      cout << ((x*a % b) /a) << " ";
    }
    
    return 0;
}

