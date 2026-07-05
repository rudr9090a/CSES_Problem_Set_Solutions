#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<char,int> letters;
    string input;
    cin >> input;
    string output;
    if (input.length() == 1) {
        cout << input << endl;
        return 0;
    }
    for (char i : input) {
        letters[i]++;
    }
    bool odd_dectected = false;
    for (pair<const char, int> i  : letters) {
        if (odd_dectected and i.second%2==1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        if (!odd_dectected and i.second%2==1) {
            odd_dectected = true;
        }
    }
    int central_position = 0;
    for (pair i : letters) {
        if (i.second%2==1) {
            continue;
        }
        central_position = output.length()/2;
        output.insert(central_position, i.second, i.first);
    }
    for (pair i : letters) {
        if (i.second%2==1) {
            central_position = output.length()/2;
            output.insert(central_position, i.second, i.first);
            break;
        }
    }
    cout << output << endl;
}
