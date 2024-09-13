
#include<bits/stdc++.h>
#include <numeric>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int sum(int* arr, int n ) {
  return accumulate(arr, arr +n, 0);
}

int main()
{
  fastread();
  int n, k;
  cin >> n >> k;

  int a[n];
  int count = 0;

  for (int i = 0; i<n; i++) {
    cin >> a[i];
    if (a[i] < 0) count++;
  }
  for (int i = 0; i< n; i++) {
    if (count == 0 || k == 0) break;
    a[i] *= -1;
    count--;
    k--;
  }

  sort(a, a+n);
  if (k %2 == 1) a[0] *=-1;
  
  cout << sum(a, n) << endl;

    
    
  return 0;    
}
