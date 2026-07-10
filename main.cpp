#include <iostream>
int main() {
    long int a;
    std::cin >> a;
    std::cout << a <<  " ";
    while (a > 1) {if (a%2 == 1) {std::cout << a*3 + 1 << " ";a= a*3 + 1;}else {std::cout << a/2 << " ";a = a/2;}}
}