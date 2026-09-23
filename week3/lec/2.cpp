#include <iostream>

void swap(int &a, int &b);

int main() {
    int a, b;
    a = 9;
    b = 80;

    std::cout << a << b <<  "\n";

    swap(a, b);

    std::cout << a <<  b << "\n";
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
