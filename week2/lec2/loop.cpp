#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    for (int p = 0; p <= limit; p++) {
        std::cout << p << "\n";
    }

    for (int y = limit; y >=0; y--) {
        std::cout << y << "\n";
    }

    std::cout << std::flush;
}