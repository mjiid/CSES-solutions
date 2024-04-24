#include <iostream>
#include <vector>

using namespace std;

vector<string> solve(int n) {
    if (n <= 0)
        return {};

    if (n == 1)
        return { "0", "1" };

    vector<string> prev_gray_code = solve(n - 1);
    vector<string> gray_code;

    for (int i = 0; i < prev_gray_code.size(); i++) {
        gray_code.push_back("0" + prev_gray_code[i]);
    }

    for (int i = prev_gray_code.size() - 1; i >= 0; i--) {
        gray_code.push_back("1" + prev_gray_code[i]);
    }

    return gray_code;
}



int main() {
    int n;
    cin >> n;

    vector<string> GrayCode = solve(n);
    for (const string& code : GrayCode) {
        cout << code << endl;
    }

    return 0;
}
