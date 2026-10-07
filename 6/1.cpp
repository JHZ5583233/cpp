#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid array size!" << std::endl;
        return -1;
    }

    int *ar = new int[n]();
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;

        ar[i] = temp;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += ar[i];
    }

    delete [] ar;

    std::cout << sum << std::endl;
}
