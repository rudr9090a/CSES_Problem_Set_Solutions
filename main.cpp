#include <bits/stdc++.h>
#define range(i,a,b) for (int i = a; i < b; i++)
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> inputs(n);
    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }
    long long total = 0;
    for (long long input:inputs) {
        total += input;
    }
    long long ans = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++) {
        long long group1 = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                group1 += inputs[i];
            }
        }

        long long group2 = total - group1;
        ans = (ans<abs(group1 - group2)) ? ans : abs(group1 - group2);
    }
    cout << ans << endl;
}
