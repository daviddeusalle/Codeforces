#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main() {
    fastread();
    ll n;
    
    cin >> n; 
    ll a[n];

  
    for (int i = 0; i < n; i++) {
      cin >> a[i]; 
    }
    
    sort(a, a +n);
    for (int i =0; i < n -2; i++) {
      if (a[i] + a[i+1] > a[i+2]
          && a[i] + a[i +2] > a[i+1]
          && a[i+1] + a[i+2] > a[i]){
        std::cout << "YES" << endl;
        return 0;
      }  
    }
    cout << "NO" << endl; 
    return 0;
}

