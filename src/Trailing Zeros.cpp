#include <iostream>

using namespace std;
using ll = long long;

ll solve(ll n) {
    ll x = 5;
    ll sum = 0;
    while (n >= x) {
        sum += n / x;
        x *= 5;
    }
    return sum;
}

int main() {
    ll n;
    cin >> n;

    cout << solve(n) << endl;
    return 0;
}
