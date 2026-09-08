#include <iostream>


void is_primt(int in) {
    if (in == 1) {
        std::cout << "NO";
        return;
    }

    for (int i = 2; i < in; i++) {
        if (in % i == 0) {
            std::cout << "NO";
            return;
        }
    }

    std::cout << "YES";
    return;
}

void is_perfect(int in) {
    int sum = 0;
    
    for (int i = 1; i < in; i++) {
        if (in % i == 0) {
            sum += i;
        }
    }

    if (sum == in) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}

int main() {
    int input;
    std::cin >> input;

    is_primt(input);

    std::cout << " ";

    is_perfect(input);

    int digit_sum = 0;
    int amount_digits = 0;
    int temp = input;
    while (temp > 0) {
        digit_sum += (temp % 10);
        temp /= 10;
        amount_digits += 1;
    }

    std::cout << " " << digit_sum << " " << amount_digits;
    
    return 0;
}
