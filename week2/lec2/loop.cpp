#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    for (int i = 0; i <= limit; i++) {
        std::cout << i << "\n";
    }

    for (int y = limit; y >=0; y--) {
        std::cout << y << "\n";
    }

    std::cout << std::flush;
}