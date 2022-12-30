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
        ll n; cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << arr[1] << endl;
    }
    return 0;
}