#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int k, vector<int>& a, vector<int>&b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    int a_index = 0;
    int b_index = 0;

    while (a_index < a.size() && b_index < b.size()) {
        if (abs(a[a_index] - b[b_index]) <= k) {
            ans++;
            a_index++;
            b_index++;
        } else if (a[a_index] > b[b_index]) b_index++;
        else if (a[a_index] < b[b_index]) a_index++;
    }

    return ans;
}


int main() {
    int n, m, k;

    cin >> n >> m >> k;

    vector<int> a(n, 0);
    vector<int> b(m, 0);

    int index = 0;
    while (n--) cin >> a[index++];
    index = 0;
    while (m--) cin >> b[index++];

    cout << solve(k, a, b) << endl;
}