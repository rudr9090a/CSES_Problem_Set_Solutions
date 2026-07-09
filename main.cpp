#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    int tickets, buyers;
    cin >> tickets >> buyers;
    multiset<int> prices;
    vector<int> customer_pays;
    for (int i = 0; i < tickets; i++) {
        int x;
        cin >> x;
        prices.insert(x);
    }
    for (int i = 0; i < buyers; i++){
        int payed;
        cin >> payed;
        customer_pays.push_back(payed);
    }
    for (auto customer : customer_pays ) {
        auto it = prices.upper_bound(customer);
        if (it == prices.begin()) {
            cout << -1 << "\n";
            continue;
        }
        it--;
        cout << *it << "\n";
        prices.erase(it);

    }
}
