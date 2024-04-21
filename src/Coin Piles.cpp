#include <iostream>

using namespace std;
using ll = long long;

void solve(ll a, ll b) {
	ll x = (2 * a - b);
	ll y = (2 * b - a);

	if (x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		ll a, b;
		cin >> a >> b;
		solve(a, b);
	}
	return 0;
}