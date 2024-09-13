#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

#include <algorithm>

void reverse(int x[], int start, int end) {
    while (start < end) {
        std::swap(x[start], x[end]); // Intercambia los elementos
        start++;
        end--;
    }
}

int main()
{
    fastread();
    int n; 
    cin >> n;
    int x[n];
    int flag = 1;
    int last = 0;

    for (int i = 0; i < n; i++) {
      cin >> x[i];
      if (x[i] <last) {
        flag = 0;
      }
      last = x[i];
    }
    
    if (flag) {
      cout << "yes" << endl;
      cout << "1 1" << endl;
      return 0;
    }
   
    
    int left, right;

    for (int i = 1; i < n; i++) {
      if ( x[i-1]> x[i]) {
        left = i-1;
        break;
      }
    }

    for (int i = n -2; i >= 0; i--) {
      if (x[i+1] < x[i]) {
        right = i+1;
        break;
      }
    }

    reverse(x, left, right);


    last = 0, flag = 1;
    for (int i = 0; i< n; i++) {
      if (x[i]< last) {
        flag = 0;
      }
      last = x[i];
    }

    if (flag) {
      cout << "yes" << endl;
      cout << (left +1) << " " << right +1 << endl;
    } else {
      cout << "no" << endl;
    }
    
    return 0;
}
