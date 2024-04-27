#include <iostream>

using namespace std;

void solve(int src, int dest, int hel, int n) {
    if (n <= 0) {
        return;
    }

    solve(src, hel, dest, n - 1);
    cout << src << " " << dest << endl;
    solve(hel, dest, src,n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    solve(1, 3, 2, n);
    return 0;
}