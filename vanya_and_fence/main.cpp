#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int array[n];
    int acc = 0;
    for (int i = 0; i < n; i++) {
      cin >> array[i];
      if (array[i] <= h) {
        acc += 1;
      } else {
        acc += 2;
      }
    }
    cout << acc;
    return 0;
}
  

