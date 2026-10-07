#include <cstdio>
#include <iostream>
#include <string>

class BankAccount {
    private:
        int accountNumber, balance;

    public:
        BankAccount(int accountNumber, int balance) {
            this->accountNumber = accountNumber;
            this->balance = balance;
        }
        
        void deposit(int amount) {
            this->balance += amount;
        }
        
        void withdraw(int amount) {
            if (amount > this->balance) {
                std::cout << "INSUFFICIENT_FUNDS" << std::endl;
                return;
            }
            
            this->balance -= amount;
        }
        
        int getBalance() const {
            return this->balance;
        }

};

int main() {
    int op, number, bal;
    std::cin >> op;
    std::cin >> number >> bal;

    BankAccount account = BankAccount(number, bal);

    for (int i = 0; i < op; i++) {
        std::string operation;
        int amount;
        std::cin >> operation >> amount;

        if (operation == "DEPOSIT") {
            account.deposit(amount);
        } else if (operation == "WITHDRAW") {
            account.withdraw(amount);
        }
        
        // Print balance after each operation
        std::cout << account.getBalance() << std::endl;
    }

    return 0;
}