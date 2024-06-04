#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int score = 1;
    int maxScore = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            score++;
        } else {
            maxScore = max(score, maxScore);
            score = 1;
        }
    }

    maxScore = max(score, maxScore);

    cout << maxScore << endl;

    return 0;
}
