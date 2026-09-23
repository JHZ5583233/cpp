#include <iostream>
#include <string>

void match_string(std::string x, std::string y);

int main() {
    std::string a, b;

    std::cin >> a;
    std::cin >> b;
    
    match_string(a, b);
    
    return 0;
}


void match_string(std::string x, std::string y){
    if (x == y) {
        std::cout << "Match\n"; 
    } else {
        std::cout << "No Match\n";
    }
}