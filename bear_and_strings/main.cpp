#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;



int main()
{
  fastread();
  string s;

  cin >> s;
  map<char,int> chars;

  int acc = 0;

  for (int i = 0; i < s.length()- 3; i++){
    if (s[i]== 'b' && s[i+1] == 'e' && s[i+2]== 'a' && s[i+3] == 'r') {
      acc += s.length() - 3;
      int l = i-1,r = i+4;     
    }
  }
  
  cout << acc;
  

  return 0;
}
