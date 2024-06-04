#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve(ll n) {
    if (n * (n + 1) / 2 % 2 != 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        vector<ll> set1, set2;
        ll sum1 = 0, sum2 = 0;

        for (ll i = n; i >= 1; i--) {
            if (sum1 <= sum2) {
                set1.push_back(i);
                sum1 += i;
            }
            else {
                set2.push_back(i);
                sum2 += i;
            }
        }

        cout << set1.size() << endl;
        for (ll num : set1) {
            cout << num << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (ll num : set2) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ll n;
    cin >> n;

    solve(n);
    return 0;
}
