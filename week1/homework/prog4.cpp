#include <iostream>

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::cout << "AND: " << (a & b) << std::endl;
    std::cout << "OR: " << (a | b) << std::endl;
    std::cout << "XOR: " << (a ^ b) << std::endl;
    std::cout << "NOT a: " << ~a << std::endl;

    std::cout << sizeof(int) << " Bytes" << std::endl;
    std::cout << sizeof(a) << " Bytes" << std::endl;
    std::cout << sizeof(b) << " Bytes" << std::endl;
    
    return 0;
}