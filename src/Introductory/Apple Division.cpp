#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

using ll = long long;
using namespace std;

void solve(vector<ll> &apples, int index, vector<ll> a, vector<ll> b, vector<ll>& res) {
    if (a.size() + b.size() == apples.size()) {
        ll sum1 = accumulate(a.begin(), a.end(), 0LL);
        ll sum2 = accumulate(b.begin(), b.end(), 0LL);
        res.push_back(abs(sum1 - sum2));
        return;
    }

    a.push_back(apples[index]);
    solve(apples, index + 1, a, b, res);
    a.pop_back();
    b.push_back(apples[index]);
    solve(apples, index + 1, a, b, res);
    b.pop_back();
}

int main() {
    int n; cin >> n;
    vector<ll> apples(n, 0);
    for (int i = 0; i < n; i++) cin >> apples[i];

    vector<ll> ans;
    vector<ll> s1;
    vector<ll> s2;

    solve(apples, 0, s1, s2, ans);

    // Find the minimum difference:
    ll min_diff = LLONG_MAX;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] < min_diff) {
            min_diff = ans[i];
        }
    }

    cout << min_diff << endl;

    return 0;
}