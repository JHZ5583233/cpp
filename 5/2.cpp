#include <climits>
#include <cstddef>
#include <iostream>

int findSum(int *arr, size_t n);

int findMax(int *arr, size_t n);

int findMin(int *arr, size_t n);

int main() {
    int arr[100000], n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << findSum(arr, n) << " " << findMax(arr, n) << " " << findMin(arr, n) << std::endl;
}

int findSum(int *arr, size_t n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

int findMax(int *arr, size_t n) {
    int sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > sum) {
            sum = arr[i];
        }
    }

    if (sum == INT_MIN) {
        sum = 0;
    }
    
    return sum;
}

int findMin(int *arr, size_t n) {
    int sum = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < sum) {
            sum = arr[i];
        }
    }

    if (sum == INT_MAX) {
        sum = 0;
    }
    
    return sum;
}