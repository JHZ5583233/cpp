#include <iostream>

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    a += b;
    b -= a;
    b *= -1;
    a -= b;

    std::cout << "After swap: " << a << " " << b << std::endl;
    
    return 0;
}