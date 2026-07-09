#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    int children, max_weight;
    cin >> children >> max_weight;
    vector<int> weights(children);
    for (int i = 0; i < children; i++) cin >> weights[i];
    sort(weights.begin(), weights.end());
    int no_of_gondolas = 0;
    int lo = 0;
    int hi = children - 1;
    while (lo<=hi) {
        if (lo == hi) {
            no_of_gondolas++;
            break;
        }
        if (weights[lo]+weights[hi] <= max_weight) {
            lo++;
        }
        no_of_gondolas++;
        hi--;
    }
    cout << no_of_gondolas << "\n";
}
