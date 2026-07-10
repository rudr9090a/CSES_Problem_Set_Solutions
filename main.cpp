#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    long long coins;
    cin >> coins;
    vector<long long> coin_values;
    for (long long i = 0; i < coins; i++) {
        long long input;
        cin >> input;
        coin_values.push_back(input);
    }
    sort(coin_values.begin(), coin_values.end());
    long long output=0;
    for (auto coin : coin_values) {
        if (output + 1  >= coin) {
            output += coin;
        } else {
            break;
        }
    }
    cout << output+1 << "\n";
    return 0;
}
