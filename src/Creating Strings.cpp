#include <iostream>
#include <string>
#include <map>

using namespace std;

int fact(int n ) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

void createStrings(string s, string ans, map<char, int> mp) {
    if (ans.length() == s.length()) {
        cout << ans << '\n';
        return;
    }

    for (auto& p : mp) {
        if (p.second > 0) {
            mp[p.first]--;
            createStrings(s, ans + p.first, mp);
            mp[p.first]++;
        }
    }
}

int main() {
    string s; cin >> s;
    int n = s.length();
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }

    int ans = fact(n);
    for (auto p : mp) {
        ans /= fact(p.second);
    }
    cout << ans << '\n';

    createStrings(s, "", mp);

    return 0;
}