
#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<char> alphabets;
    vector<int> numbers;
    string input;
    getline(cin, input);
    char previous = input[0];
    int count = 0 ;

    for (int i = 0; i < input.length(); i++) {
        if (previous == input[i]) {
            count++;
            alphabets.push_back(input[i]);
            numbers.push_back(count);
        }
        else if (previous != input[i]) {
            previous = input[i];
            count = 1;

        }
    }
    int largest = numbers[0];
    for (int number : numbers) {
        if (number > largest) {
            largest = number;
        }
    }
    cout << largest << endl;
}