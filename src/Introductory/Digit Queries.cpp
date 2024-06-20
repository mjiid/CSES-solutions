#include <iostream>
#include <string>

using namespace std;
using ll = long long;

char solve(ll k) {
    ll len = 0;
    ll digitLen = 1;
    ll rangeStart = 1;

    while (true) {
        ll rangeEnd = rangeStart * 10 - 1;
        ll rangeSize = (rangeEnd - rangeStart + 1) * digitLen;

        if (len + rangeSize >= k) {
            break;
        }

        len += rangeSize;
        digitLen++;
        rangeStart *= 10;
    }

    ll numIndex = (k - len - 1) / digitLen;
    ll digitIndex = (k - len - 1) % digitLen;

    ll num = rangeStart + numIndex;
    string numStr = to_string(num);

    return numStr[digitIndex];
}

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        ll k;
        cin >> k;
        char res = solve(k);
        cout << res << endl;
    }

    return 0;
}
