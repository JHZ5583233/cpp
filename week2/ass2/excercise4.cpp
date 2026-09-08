#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    int amount;
    std::cin >> amount;

    std::string command;
    int x = 0; 
    int y = 0;
    
    for (int i = 0; i < amount ; i++) {
        std::cin >> command;

        if (command == "UP") {
            y += 1;
        } else if (command == "DOWN") {
            y -= 1;
        } else if (command == "LEFT") {
            x -= 1;
        } else if (command == "RIGHT") {
            x += 1;
        }
    }

    std::cout << x << " " << y << std::endl << abs(x) + abs(y);
    return 0;
}