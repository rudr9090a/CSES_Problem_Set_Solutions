#include <algorithm>
#include <iostream>
#include <future>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;
long long exponentiate(long long a, long long b, long long mod) {
    long long result = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % mod;
        b /= 2;
    }
    return result;
}

int main() {
    long long mod = 1e9 + 7;
    int number_of_inputs;
    cin >> number_of_inputs;
    cin.ignore();

    vector<pair<int,int>> inputs;
    vector<future<long long>> futures;

    for (int i = 0; i < number_of_inputs; i++) {
        string line;
        getline(cin, line);
        int a, b;
        istringstream(line) >> a >> b;
        inputs.emplace_back(a, b);
    }

    for (auto& [a, b] : inputs) {
        cout << exponentiate(a, b, mod) << endl;
    }
}