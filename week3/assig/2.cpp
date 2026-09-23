#include <cstddef>
#include <cstdio>
#include <iostream>

void total(size_t &x, size_t y);

double average(size_t x);

char grade(double avg);

bool passAll(size_t grade);

int main() {
    size_t tot = 0;
    size_t x;
    bool p = true;
    bool t = true;
    
    for (int i = 0; i < 5; i++) {
        std::cin >> x;
        total(tot, x);

        t = passAll(x);
        p = (p && t);
    }

    std::cout << tot << " ";

    double av = average(tot);

    std::cout << av << " ";

    char c = grade(av);

    std::cout << c << " ";

    if (p) {
        std::cout << "PASS";
    } else {
        std::cout << "FAIL";
    }

    std::cout << std::endl;
}

void total(size_t &x, size_t y) {
    x += y;
}

double average(size_t x) {
    return double(x) / 5;
}

char grade(double avg) {
    if (avg < 50) {
        return 'F';
    } else if (avg < 60) {
        return 'D';
    } else if (avg < 70) {
        return 'C';
    } else if (avg < 80) {
        return 'B';
    } else {
        return 'A';
    }
}

bool passAll(size_t grade) {
    if (grade < 40) {
        return false;
    } else {
        return true;
    }
}