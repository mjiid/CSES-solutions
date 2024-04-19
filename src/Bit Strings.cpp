#include <iostream>

using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

ll power(int n) {
    ll res = 1;
    ll base = 2; 
    while (n > 0) {
        if (n % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        n /= 2;
    }
    return res;
}


int main() {
	int n;
	cin >> n;
	cout << power(n) << endl;
	return 0;
}