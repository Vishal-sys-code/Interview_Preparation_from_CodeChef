#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long

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
    ul t; cin >> t;
    while (t--) {
        ll h, w, x, y, k; cin >> h >> w >> x >> y >> k;
        //Euclidean Distance
        ll diff1 = (w - x);
        ll diff2 = (y - h);
        ll sq1 = pow(diff1, 2);
        ll sq2 = pow(diff2, 2);
        ll sum = (sq1 + sq2);
        ll distance = sqrt(sum); // distance
        if (distance < k) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}