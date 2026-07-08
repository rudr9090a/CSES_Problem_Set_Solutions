#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    int n, m, adjustability;
    cin >> n >> m >> adjustability;
    vector<int> tenants(n), apartments(m);
    for (int i = 0; i < n; i++) cin >> tenants[i];
    for (int i = 0; i < m; i++) cin >> apartments[i];
    sort(tenants.begin(), tenants.end());
    sort(apartments.begin(), apartments.end());
    int count_of_tenants_housed = 0,apartment_index = 0,tenant_index = 0;
    while ((apartment_index < apartments.size()) && (tenant_index < tenants.size())) {
        if (abs(apartments[apartment_index] - tenants[tenant_index]) <= adjustability) {
            count_of_tenants_housed++;
            tenant_index++;
            apartment_index++;
        } else if (apartments[apartment_index] > tenants[tenant_index]) {
            tenant_index++;
        } else if (apartments[apartment_index] < tenants[tenant_index]) {
            apartment_index++;
        }
    }

    cout << count_of_tenants_housed << "\n";

}
