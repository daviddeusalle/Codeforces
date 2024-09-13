#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int n;
    cin >> n;

    vector<int> a(n);
    int curr, prev;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (i == 0) a[0] = 0;
        else a[i] = curr - prev;
        prev = curr;
    }

    int sym = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            sym = a[i];
            break;
        }
    }

    int maxLen = 0;
    int last = 0, count = 0, total = 0;
    for (int i = 0; i < n; i++) {
        count += a[i];
        if (count != 0 && count != sym) {
            if (i - last > maxLen) {
                maxLen = i - last;
            }

            count -= a[last];
            last++;
            while (last < n && abs(count) > 1) {
                count -= a[last];
                if (abs(count) <= 1) break;
                last++;
            }
            for (int j = last + 1; j < n; j++) {
                if (a[j] != 0) {
                    sym = a[j];
                    break;
                }
            }
        }
    }

    if (n - last > maxLen) maxLen = n - last;
    cout << maxLen << endl;
    return 0;
}

