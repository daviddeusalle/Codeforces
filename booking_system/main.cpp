#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;



int main() {
  fastread();
  int n, k;
  cin >> n;
  vector<pair<int,int>> groups(n);
  int people[n];

  for (int i = 0; i < n; i++) {
    cin >> people[i] >> groups[i].first;
    groups[i].second = i;
  }
  std::sort(groups.begin(), groups.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first > b.first; 
  });
  cin >> k;

  vector<bool> taken(k);
  vector<pair<int, int>> rooms(k);
  for (int i = 0; i < k; i++) {
    cin >> rooms[i].first;
    rooms[i].second = i;
    taken[i] = true;
  }
  sort(rooms.begin(), rooms.end());
  int money = 0; 
  int requests = 0; 
  string lines = "";
  for (int i = 0; i <n; i++) {
    
    for (int j = 0; j < k; j++) {
      if (rooms[j].first >= people[groups[i].second] && taken[rooms[j].second]) {
        taken[rooms[j].second] = false;
        requests++;
        money += groups[i].first;
        lines += to_string(groups[i].second + 1) + " " + to_string(rooms[j].second +1) + "\n";  
        break;
      }
    }
     
  }
  cout << requests << " " << money << endl;
  cout << lines;
  return 0; 
}
