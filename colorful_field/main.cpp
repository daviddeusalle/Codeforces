#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

#include <vector>
#include <string>
#include <algorithm>

using Coordenada = std::pair<int, int>;

int main()
{
    fastread();
    int n, m, k, t;
    
    
    cin >> n >> m >> k >> t;
  
    std::vector<Coordenada> wastes;
    
    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      wastes.emplace_back(a-1,b-1);
    }

    std::sort(wastes.begin(), wastes.end());

    for (int i = 0; i < t; i++) {
      int a, b;
      int num = 0;
      int flag = 1;
      cin >> a >> b;
      a--;
      b--;
      for (const auto& waste : wastes) {
        if ((waste.first > a) || (waste.first == a && waste.second > b)) {   
          break;
        } else if (waste.first == a && waste.second == b) {
          flag = 0;
          cout << "Waste" << endl;
          break;
        } else {
          num++;
        }
      }
      if(flag) {

          switch(((m*(a) + b)-num)% 3) {
            case 0:
              cout << "Carrots" << endl;
              break;
            case 1:
              cout << "Kiwis" << endl;
              break;
            case 2:
              cout << "Grapes" << endl;
              break;
          }
        }
    }
    return 0;
}
