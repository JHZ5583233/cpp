#include <cstddef>
#include <string>
#include "string"
#include "iostream"

struct Student {
    size_t id;
    std::string name;
    double mark;
};

double calculateAverage(Student *students, size_t n);

int main() {
    Student arr[100000];
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i].id >> arr[i].name >> arr[i].mark;
    }

    double averge = calculateAverage(arr, n);
    std::cout << averge << "\n";

    Student highest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i].mark > highest.mark) {
            highest = arr[i];
        }
    }

    std::cout << highest.id << " " << highest.name << " " << highest.mark << std::endl;
}

double calculateAverage(Student *students, size_t n) {
    double av = 0;
    
    for (int i = 0; i < n; i++) {
        av += students[i].mark;
    }

    return av / n;
}