#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int combinations(int n, int k) {
    if (k > n) return 0;
    int result = 1;
    for (int i = 1; i <= k; ++i) {
        result *= n--;
        result /= i;
    }
    return result;
}

double probability(int n, int k) {
    double p = 0.5; // Same probability + or -
    
    double probability = combinations(n, k) * pow(p, k) * pow(1 - p, n - k);
    
    return probability;
}

int main() {
    fastread();
    string send;
    string recieved;

    cin >> send;
    cin >> recieved;
    
    int N = send.length();
    map <char, int> chars;
    for (int i = 0; i < N; i++) {
      chars[send[i]]++;   
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
      if (recieved[i] == '?') count++;
      else chars[recieved[i]]--;
    }
    // No ?
    if (count == 0) {
      if (chars['+'] == 0 && chars['-'] == 0) {
        cout << 1 << endl;
      } else {

        cout << 0 << endl;
      }

      return 0;
    }
    if (chars['+'] < 0 || chars['-'] < 0) {
      cout << 0 << endl;
      return 0;
    }
    cout << setprecision(12);
    cout << probability(count, chars['+']) << endl;

    


    return 0;
}
