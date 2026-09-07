#include <iostream>

int main() {
    while(1) {
        std::cout << "grade\n";
        int s;
        std::cin >> s;

        std::cout << s << "\n";

        if (s < 5) {
            std::cout << "no\n";
        } else if (s <  21) {
            std::cout << "You are still in high school\n";
        } else {
            std::cout << "you can take exam.\n";
        }

        switch (s) {
            case 0 :
                std::cout <<  "how?\n";
                break;
            case 1:
                std::cout << "F\n";
                break;
            case 2:
                std ::cout << "D\n";
                break;
            case 3:
                std::cout << "C\n";
                break;
            case 4:
                std::cout << "B\n";
                break;
            case 5:
                std::cout << "A\n";
                break;
            default:
                std::cout << "Whaat\n";
        }

        std::cout << std::flush;
    }

    return 0;
}
