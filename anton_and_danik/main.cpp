
using namespace std;

int main() {


  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int n;
  cin >> n;
  int dan = 0, anton = 0;

  char aux;
  for(int i=0; i < n; i++) {
    cin >> aux;
    if (aux == 'A') {
      anton++;
    } else {
      dan++;
    }
  }
  if (anton > dan) {
    cout << "Anton";
  } else if (anton < dan) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }
  
    return 0;
}

