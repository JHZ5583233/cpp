#include <iostream>

int main() {
    int age = 657;
    double grade = 5.57;
    char cha = 'y';
    bool truth = 1;

    std::cout << "age: " << age << " bites:" << sizeof(age) << std::endl;
    std::cout << "grade: " << grade << " bites:" << sizeof(grade) << std::endl;
    std::cout << "character: " << cha << " bites:" << sizeof(cha) << std::endl;
    std::cout << "truth: " << truth << " bites:" << sizeof(truth) << std::endl;
    std::cout << "random: " << age + grade << std::endl;

    int a = 13;
    int b = 145;

    int p = a ^ b;
    int temp = p ^ a;

    std::cout << p << std::endl;
    std::cout << temp << std::endl;

    double num1, num2;
    std::cin >> num1;
    std::cin >> num2;
    int remain = ((num1 + num2)/2)*100;
    double real_remain = (remain%100);
    std::cout << real_remain/100 << std::endl;
    
    
    return 0;
}