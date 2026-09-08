#include <climits>
#include <iostream>

int main() {
    int amount;
    std::cin >> amount;

    int max = INT_MIN;
    int min = INT_MAX;
    double sum = 0;

    int input;
    for (int i = 0; i < amount; i++) {
        std::cin >> input;

        if (input > max) {
            max = input;
        } 

        if (input < min) {
            min = input;
        }

        sum += input;
    }

    std::cout << max << " " << min << " " << (sum / amount) << std::endl;

    return 0;
}