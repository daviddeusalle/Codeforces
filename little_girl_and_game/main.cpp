#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
  fastread();
  string s;
  cin >> s;
  int letters[26] = {0};

  for (int i = 0; i< s.length(); i++) {
    letters[s[i] - 'a']++;
  }
  int sum = 0;
  for (int i = 0; i < 26; i++) {
    if (letters[i] % 2 == 1) {
      sum++; 
    }
  }
  if (sum == 0 || sum % 2 == 1) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }
  
  return 0;
}
