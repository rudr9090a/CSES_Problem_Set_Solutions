#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    long long number;
    cin >> number;
    vector<long long> input_map(number+1);
    vector<long long> inputs;
    for (long long i = 0; i < number; i++) {
        long long input;
        cin >> input;
        inputs.push_back(input);
        input_map[input] = i;
    }
    int rounds = 1;
    for (long long i = 2; i <= number; i++) {
        if (input_map[i-1] > input_map[i]) {
            rounds++;
        }
    }
    cout << rounds << endl;
    return 0;
}
