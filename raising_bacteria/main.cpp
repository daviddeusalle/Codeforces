#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int n, acc = 0; 
    cin >> n;
    while (n != 0) {
      acc += (n & 1);
      n >>= 1;
    }
    cout << acc;


    return 0;
}
