#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());
    auto p1 = v.begin();
    auto p2 = v.end()-1;
    while (p1->first <= p2->first) {

        if (p1==p2) {
            break;
        }
        if (p1->first + p2->first == x) {
            cout << p1->second << " " << p2->second << endl;
            return 0;
        }
        if (p1->first + p2->first > x) {
            --p2;
        } else {
            ++p1;
        }
    }
    cout << "IMPOSSIBLE" << "\n";
    return 0;
}