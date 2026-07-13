#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int mid = (1e9)/2;
    vector range = {1,static_cast<vector<int>::value_type>(1e9)};
    for (int i = 0; i < 30; i++) {
        string reponse;
        cout << "? " << mid << endl;
        cin >> reponse;
        if (reponse == "YES") {
            range[0] = mid;
        } else {
            range[1] = mid;
        }
        mid = (range[0] + range[1])/2;
    }
    cout << "! " << range[1]<< endl;

}