#include <iostream>

using namespace std;
using ll = long long;

ll solve(ll n) {

    ll pairs = (n * n) * (n * n - 1) / 2;
    ll attacks = 4 * (n - 1) * (n - 2);

    return  (pairs - attacks);
}

int main() {
    // Credits to MACS (chill stream): ughh that was a tough one hh
    ll n;
    cin >> n;

    for (ll k = 1; k <= n; k++) {
        cout << solve(k) << endl;
    }
}