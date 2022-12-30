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
        ll n; cin >> n;
        ll a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
        ll sum = (a + b + c + d + e + f);
        // number of unpainted cubes divided by 0.5 cus to painted the unpainted area it takes half of the dollar
        ll div = ceil(n * 0.5);
        cout << sum*div << endl;
    }
    return 0;
}