#include <bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //Solution
    int customer=0;
    cin >> customer;
    vector<int> arrival_times(customer);
    vector<int> departure_times(customer);
    for (int i = 0; i < customer; i++) {
        cin >> arrival_times[i] >> departure_times[i] ;
    }
    int person = 0;
    sort(arrival_times.begin(), arrival_times.end());
    sort(departure_times.begin(), departure_times.end());
    auto i = arrival_times.begin();
    auto j = departure_times.begin();
    int p_max = 0;
    while (j != departure_times.end()) {
        if (i == arrival_times.end()) {
            break;
        }
        if (*i < *j) {
            person++;
            p_max = (person > p_max) ? person : p_max;
            auto end = arrival_times.end();
            if (i == end) continue;
            i++;
        } else if (*i > *j) {
            person--;
            j++;
        } else if (*i == *j) {
            person--;
            j++;
            person++;
            i++;
            p_max = (person > p_max) ? person : p_max;
        }
    }
    cout << p_max << endl;
}
