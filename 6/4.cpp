#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid array size!" << std::endl;
        return -1;
    }
    
    int *matrix = new int[n * n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[j + (i * n)];
        }
    }

    int prim = 0;
    int sec = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                prim += matrix[(i * n) + j];

                sec += matrix[(i * n) + (n - j - 1)];
            }
        }
    }

    std::cout << prim << " " << sec << std::endl;

    delete [] matrix;
}