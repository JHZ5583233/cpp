#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    k = k % n;

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

    int *rar = new int[n]();

    for (int i = 0; i < n; i++) {
        int temp;
        temp = (n - 1 - i - k);

        if (temp < 0) {
            temp = temp + n;
        }
        rar[n - i - 1] = ar[temp];
    }

    delete [] ar;

    for (int i = 0; i < (n - 1); i++) {
        std::cout << rar[i] << " ";
    }
    std::cout << rar[n - 1] << std::endl;

    delete [] rar;
}
