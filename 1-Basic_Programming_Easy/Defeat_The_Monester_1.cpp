#include<bits/stdc++.h>
using namespace std;
#define ll long long

void FAST_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    FAST_IO();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
#endif
    ll t; cin >> t;
    while (t--) {
        ll h, x, y; cin >> h >> x >> y;
        if (y >= x) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}