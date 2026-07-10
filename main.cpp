#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int inp;
    cin >> inp;
    if (inp == 1) {
        cout << "1";
        return 0;
    }
    if (inp == 4) {
        cout << "2 4 1 3 ";
        return 0;
    }
    if (inp <= 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
 
    if (inp % 2 == 1) {
        int breaker = (inp+1)/2;
        int second_starter = breaker + 1;
        int first_starter = 1;
        bool odd = false;
        string output = "";
        for (int i = 1; i <= inp; ++i) {
            if (!odd) {
                odd = true;
                output += (std::to_string(first_starter)+" ");
                first_starter += 1;
                continue;
            }
            if (odd) {
                output += (std::to_string(second_starter)+" ");
                second_starter += 1;
                odd = false;
 
            }
        }
        cout << output << endl;
    } else {
        int breaker = inp/2;
        int first_starter = 1;
        int second_starter = breaker+1;
        bool odd = false;
        string output = "";
        for (int i = 1; i <= inp; ++i) {
            if (!odd) {
                odd = true;
                output += (std::to_string(first_starter)+" ");
                first_starter += 1;
                continue;
            }
            if (odd) {
                odd = false;
                output += (std::to_string(second_starter)+" ");
                second_starter += 1;
 
            }
        }
        cout << output << endl;
 
    }
    return 0;
}