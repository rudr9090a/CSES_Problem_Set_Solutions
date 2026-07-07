#include <bits/stdc++.h>
#define range(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
long long exponentiate_mod(long long a, long long b, long long mod) {
    if (b == 0) {
        return 1;
    }
    long long output = 1;
    while(b>0) {
        if (b%2 == 0) {
            b = b/2;
            a = (a*a)%mod;
        }
        else {
            b -= 1;
            output = (a*output)%mod;
        }
    }
    return output;
}
long long triply_exponentiate(long long a, long long b, long long c,long long mod) {
    long long exp;
    exp = exponentiate_mod(b,c,mod-1);
    long long final = exponentiate_mod(a,exp,mod);
    return final;
}


int main() {
    long long mod = 1e9 + 7;
    int number_of_inputs;
    cin >> number_of_inputs;
    cin.ignore();
    vector<vector<long long>> inputs;
    vector<future<long long>> futures;

    for (int i = 0; i < number_of_inputs; i++) {
        string line;
        getline(cin, line);
        int a, b, c;
        istringstream(line) >> a >> b >> c;
        inputs.emplace_back(vector({static_cast<long long>(a),static_cast<long long>(b),static_cast<long long>(c)}));
    }
    for (vector l : inputs) {
        cout << triply_exponentiate(l[0], l[1], l[2], mod) << "\n";
    }
}
