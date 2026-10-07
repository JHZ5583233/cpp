#include <iostream>

void swapNumbers(int *a, int *b);

int main (){
    int a, b;
    std::cin >> a >> b;

    swapNumbers(&a, &b);

    std::cout << a << " " << b << std::endl;
}

void swapNumbers(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
}