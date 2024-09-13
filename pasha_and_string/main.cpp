#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    string s; 
    int m;
    cin >> s;
    int size = std::ceil(double(s.length()) / 2);

    std::vector<int> letters(size);

    cin >> m;
    for (int i = 0; i < m; i++) {
      int l;
      cin >> l;
      letters[l-1]++;
    }
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
      sum+= letters[i];
      if (sum % 2 == 1) {
        char aux = s[i];
        s[i] = s[s.length() -i -1];
        s[s.length() -i -1] = aux;
      }
    }
    cout << s << endl;
    return 0;
}
