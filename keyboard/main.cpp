#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

double euclideanDistance(const array<int, 2>& point1, const array<int, 2>& point2) {
    return sqrt(pow(point2[0] - point1[0], 2) + pow(point2[1] - point1[1], 2));
}

int main() {
    fastread();
    int n, m, x;
    int acc = 0;

    array<int, 2> shift[1000]; // MAX 10 shifts
    int count = 0; // Shift counter

    cin >> n >> m >> x;

    map<char, vector<array<int, 2>>> keyboard;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;

            if (c == 'S') {
                shift[count] = {i, j};
                count++;
            } else {
                keyboard[c].push_back({i, j});
            }
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        char t;
        cin >> t;

        if (keyboard.count(t) == 0) { // La tecla no está en el teclado
            if (keyboard.count(tolower(t)) != 0 && count > 0) { // La versión minúscula sí está
                int flag = 1;
                for (int j = 0; j < count; j++) {
                    for (const auto& arr : keyboard[tolower(t)]) {
                        if (euclideanDistance(shift[j], arr) <= x) {
                            flag = 0;
                            break;
                        }
                    }
                    if (!flag) break;
                }
                if (flag) acc++; // Necesitas presionar shift
            } else {
                cout << "-1" << endl; // No se puede escribir esta tecla
                return 0;
            }
        }
    }

    cout << acc << endl;

    return 0;
}

