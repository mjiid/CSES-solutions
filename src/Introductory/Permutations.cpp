#include <iostream>
 
using namespace std;
 
void parity(int n) {
    for (int i = 2 - n % 2; i <= n; i+= 2) {
        cout << i << " ";
    }
}
 
int main() {
    int n;
    cin >> n;
 
    if (n == 1) {
        cout << 1 << endl;
    } else if (n < 4) {
        cout << "NO SOLUTION" << endl;
    } else {
        if (n % 2) {
            parity(n - 1);
            parity(n);
        } else {
            parity(n);
            parity(n - 1);
        }
        cout << "" << endl;
    }
 
    return 0;
}
