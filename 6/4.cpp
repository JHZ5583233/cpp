#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid array size!" << std::endl;
        return -1;
    }
    
    int *matrix = new int[n];

    for (int i = 0; i < n; i++) {
        int *vector = new int[n];

        for (int j = 0; j < n; j++) {
            std::cin >> vector[j];
        }

        matrix[i] = vector;
    }
    
}