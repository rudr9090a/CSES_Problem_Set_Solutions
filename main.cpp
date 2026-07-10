#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string ending_int_str;
    getline(cin,ending_int_str);
    int ending_int = stoi(ending_int_str);
    string str;
    getline(cin, str);
    vector<int> vec;
    str += " ";
    string accumulated = "";
    for (int  i = 0;i<=str.length();i++) {

        if (str[i] == ' ') {
            vec.push_back(stoi(accumulated));
            accumulated = "";
        }
        else {
            accumulated += str[i];
        }
    }
    vector<int> ordered_list;
    for (int i = 1;i<=ending_int;i++) {
        ordered_list.push_back(i);
    }
    long int ordered_list_SUM = 0;
    long int ved_SUM = 0;
    for (int i = 0; i < ordered_list.size(); i++) {
        ordered_list_SUM += ordered_list[i];
    }
    for (int i = 0; i < vec.size(); i++) {
        ved_SUM += vec[i];
    }
    cout << ordered_list_SUM - ved_SUM << endl;
}