#include <iostream>
#include <string>

int main() {
    int amount;
    std::cin >> amount;

    std::string command;
    int x, y;
    
    for (int i = 0; i < amount ; i++) {
        std::cin >> command;
        std::cin >> x;
        std::cin >> y;

        if (command == "ADD") {
            std::cout << x + y;
        } else if (command == "SUB") {
            std::cout << x - y;
        } else if (command == "MUL") {
            std::cout << x * y;
        } else if (command == "DIV") {
            std::cout << x / y;
        } else if (command == "MOD") {
            std::cout << x % y;
        }

        if (i != amount -1) {
            std::cout << "\n";
        }
    }
    
    return 0;
}