#include <iostream>

int main() {
    double a;
    std::cin >> a;

    double f = (double)(a * 9) / (double)5;

    std::cout << "Fahrenheit: " << f + 32 << std::endl;
    
    return 0;
}