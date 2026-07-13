#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long double med = (n%2==1) ? v[(n-1)/2] : (v[n/2]+v[n/2-1])/2;
    if (med-floor(med)>0) {
        med = floor(med);
    }
    med = static_cast<ll>(med);
    ll output = 0;
    for (auto x : v) {
        output = output + abs(x-med);
    }
    cout << output << endl;
}