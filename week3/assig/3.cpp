#include <cstddef>
#include <cstdio>
#include <iostream>

size_t area(size_t side);

size_t area(size_t length, size_t width);

double area(double radius);

int main() {
    int type;
    
    std::cin >> type;

    size_t ar;
    switch (type) {
        case 1:
            size_t x;
            std::cin >> x;
            
            ar = area(x);
            std::cout << ar;
            break;
        case 2:
            size_t l, w;
            std::cin >> l;
            std::cin >> w;

            ar = area(l, w);
            std::cout << ar;
            break;
        case 3:
            double r, car;
            std::cin >> r;
            
            car = area(r);
            std::cout << car;
            break;
    }

    std::cout << std::endl;
}

size_t area(size_t side) {
    return side * side;
}

size_t area(size_t length, size_t width) {
    return length * width;
}

double area(double radius) {
    return 3.14 * (radius * radius);
}