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
  char a;
  string res;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    switch (a) {
      case '2':
        res += "2";  
        break;
      case '3':
        res += "3";
        break;
      case '4': 
        res += "322";
        break;
      case '5':
        res += "5";
        break;
      case '6':
        res += "53";
        break;
      case '7': 
        res += "7";
        break;
      case '8':
        res += "7222";
        break;
      case '9':
        res += "7332";
        break;
    }
  }

  sort(res.begin(), res.end(), [](auto &c1, auto &c2) { return c1 > c2; });
  cout << res << endl;
  return 0;

}
