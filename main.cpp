#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //solution

    ll n;
    cin >> n;
    string s;
    s = std::to_string(n);
    ll steps = 0;
    while (n != 0) {
        int to_rm = 0;
        for (auto x : s) {
            to_rm = max(to_rm, x - '0');
        }
        n -= to_rm;
        steps++;
        s = to_string(n);
    }
    cout << steps << "\n";
}