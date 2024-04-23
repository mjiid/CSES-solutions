#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int count[26] = { 0 };

    for (char c : s) {
        count[c - 'A']++;
    }

    int odd = -1;
    int even = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2) {
            odd = i;
        }
        if (count[i] > 1) even++;
    }

    // Check if the palindrome is possible:
    if ((odd == -1 && n % 2) || (odd != -1 && !(n % 2)) || (odd != -1 && even == 0 && n != 1)) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // Construct the palindrome:
    string ans;
    ans.reserve(n); 
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i] / 2; j++) {
            ans += 'A' + i;
        }
    }

    cout << ans;
    if (odd != -1) {
        cout << (char)('A' + odd);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';

    return 0;
}
