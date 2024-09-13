#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

int main() {
    fastread();
    int n, a;
    ll acc = 0; 
    cin >> n >> a;
    vector<ll> x(n);
    vector<ll> c(n);
    vector<ll> f(n);
    vector<pair<ll, ll>> pairs(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> c[i];
        f[i] = (c[i] > 2 * x[i] ? 2 * x[i] : c[i]);
        x[i] = (c[i] > x[i] ? x[i] : c[i]);
        pairs[i] = make_pair(x[i], f[i]);
    }

    sort(pairs.rbegin(), pairs.rend());

    for (int i = 0; i < n; i++) {
        if (i < a) {
            acc += pairs[i].second;
        } else {
            acc += pairs[i].first;
        }
    }

    cout << acc << endl;
    return 0;
}

