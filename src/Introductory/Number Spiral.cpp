#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long result = 0;

        if (x == y) {
            result = x * y - (x - 1);
        } else if (x > y) {
            result = x * x - (x - 1);
            if (x % 2)
                result -= (x - y);
            else
                result += (x - y);
        } else {
            result = y * y - (y - 1);
            if (y % 2)
                result -= (x - y); 
            else
                result += (x - y); 
        }

        cout << result << endl;
    }

    return 0;
}
