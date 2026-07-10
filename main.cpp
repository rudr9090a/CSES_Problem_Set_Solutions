#include <bits/stdc++.h>
using namespace std;
long long dice_combinations(int n, vector<long long>& memo) {
    if (n == 0) {
        return 1;
    }
    const long long MOD = 1000000007;
    long long output=0;
    output = memo[n];
    if (output != -1) return output;
    output = 0;
    const vector dice = {1,2,3,4,5,6};
    for (int possibility : dice) {
        int remainder = n - possibility;
        if (remainder >= 0) {
            output += dice_combinations(remainder, memo)%MOD;
        }
    }
    output %= MOD;
    memo[n] = output;
    return output;
    }


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    const long long MOD = 1000000007;
    vector<long long> memo(1000001,-1);
    memo[0] = 1;
    int number=0;
    cin >> number;
    long long output = 0;
    output = dice_combinations(number,memo);
    cout << output%MOD << endl;

}
