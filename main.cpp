#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int coins, money;
    cin >> coins >> money;
    vector<int> options(coins);
    for (int i = 0; i < coins; i++) cin >> options[i];

    vector<int> dp(money + 1, INT_MAX);
    dp[0] = 0; // base case: 0 coins needed to make sum 0

    for (int x = 1; x <= money; x++) {
        for (int c : options) {
            if (c <= x && dp[x - c] != INT_MAX) {
                dp[x] = min(dp[x], dp[x - c] + 1);
            }
        }
    }

    cout << (dp[money] == INT_MAX ? -1 : dp[money]) << "\n";
    return 0;
}