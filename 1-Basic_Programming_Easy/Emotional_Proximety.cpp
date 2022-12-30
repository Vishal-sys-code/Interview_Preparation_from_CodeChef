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
        ll p, x, y, z; cin >> p >> x >> y >> z;
        long  double profit = p + (y * p / 100);
        long  double loss = p - (x * p / 100);
        if (z == 1) {
            // printf("%.10f");
            cout << fixed << setprecision(10) << profit << endl;
        }
        else {
            cout << fixed << setprecision(10) << loss << endl;
        }
    }
    return 0;
}