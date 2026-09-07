#include <iostream>

int main() {
    int option;
    
    do {
    std::cout << "==== MENU ====\n1. Say Hello\n2. Show a message\n3. Exit\nChoose\n";
    std::cin >> option;

    if (option < 1 & option > 3) {
        continue;
    }

    switch (option) {
        case 1:
            std::cout << "Hello\n";
            break;
        case 2:
            std::cout << "You suck\n";
            break;
    }
    
    std::cout << std::flush;
    } while (option != 3);
}