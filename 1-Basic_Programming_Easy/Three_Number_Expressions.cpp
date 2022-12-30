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
    unsigned long t; cin >> t;
    while (t--) {
        ll n = 3;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        // for (ll i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << endl;
        ll max = arr[n - 1];
        // cout << "Maximum" << max << endl;
        ll sum = 0;
        ll a = arr[0];
        ll b = arr[1];
        sum = (a + b);
        ll diff = abs(max - sum);
        if (diff == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}