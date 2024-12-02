#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> p(n, 0);
    while (n--) {
        cin >> p[n];
    }

    sort(p.begin(), p.end());
    int gondolas = 0;
    int left = 0;
    int right = p.size() - 1;

    int current_weight = 0;
    int children = 0;
    while (right >= left) {
        if (current_weight + (p[left] + p[right]) <= x && children < 1) {
            current_weight += (p[left++] + p[right--]);
            children += 2;
        } else if (current_weight + p[right] <= x && children < 2) {
            current_weight += p[right--];
            children++;
        } else if (current_weight + p[left] <= x && children < 2) {
            current_weight += p[left++];
            children++;
        } else {
            gondolas++;
            current_weight = 0;
            children = 0;
        }
    }

    if (current_weight != 0) gondolas++;
    cout << gondolas << endl;

    return 0;
}