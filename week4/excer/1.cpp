#include <cstdio>
#include <iostream>
#include <string>

class BankAccount{
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
                std::cout << "INSUFFICIENT_FUNDS";
                return;
            }

            this->balance -= amount;
        }
        
        void getBalance() {
            std::cout << this->balance;
        }

};

int main() {
    int op, number, bal;

    scanf("%d %d", &number, &bal);

    BankAccount account = BankAccount(number, bal);

    std::string operation;
    int amount;
    for (int i = 0; i < op; i++) {
        std::cin >> operation;
        std::cin >> amount;

        if (operation == "DEPOSIT") {
            account.deposit(amount);
        } else if (operation == "WITHDRAW") {
            account.withdraw(amount);
        }
    }

    account.getBalance();
    
    return 0;
}