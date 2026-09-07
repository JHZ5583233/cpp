#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    srand(time(0));
    int attempts, nummber, guess;
    attempts = 0;
    nummber = rand() % 100 + 1;

    do {
        std::cout << "Guess number\n";
        std::cin >> guess;

        if (guess > nummber) {
            std::cout << "too big\n";
        } else if (guess < nummber) {
            std::cout << "too small\n";
        }
        
        attempts++;
    } while(guess != nummber);

    std::cout << "the number was: " << nummber << "\namount attempts: " << attempts << "\n";
    
}