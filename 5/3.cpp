#include "iostream"

void modifyArray(int *arr, size_t n);

int main() {
    int arr[100000], n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    modifyArray(arr, n);
    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];

        if (i < (n - 1)) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void modifyArray(int *arr, size_t n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * 2;
        } else {
            arr[i] += 1;
        }
    }
}