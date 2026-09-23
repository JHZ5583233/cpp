#include <cstdio>
#include <iostream>

int add(int x, int y); 
int sub(int x, int y); 
int mul(int x, int y); 
int divi(int x, int y); 
int mod(int x, int y);

int main() {
    int a, b, result;
    char o;
    scanf("%d %d %c", &a, &b, &o);

    switch (o) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            result = divi(a, b);
            if (result == -1) {
                return 0;
            }
            break;
        case '%':
            result = mod(a, b);
            if (result == -1) {
                return 0;
            }
            break;
    }

    std::cout << result << std::endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int divi(int x, int y) {
    if (y == 0) {
        std::cerr << "division by zero encountered" << std::endl;
        return -1;
    }

    return x / y;
}

int mod(int x, int y) {
    if (y == 0) {
        std::cerr << "division by zero encountered" << std::endl;
        return -1;
    }

    return x % y;
}