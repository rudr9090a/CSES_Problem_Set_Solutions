#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long zeros = 0;
    for (long long f = 5; f <= n; f *= 5) {
        zeros += n / f;
    }

    cout << zeros << endl;
    return 0;
}