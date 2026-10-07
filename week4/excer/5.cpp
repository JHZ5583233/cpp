#include <iostream>
#include <string>

class Payment {
    private:
        float amount;
    public:
        Payment(float amount) {
            this->amount = amount;
        }

        float getAmount() const {
            return this->amount;
        }

        virtual void processPayment() {
            std::cout << "Processing payment of " << this->amount << std::endl;
        }
};

class CreditCardPayment : public Payment {
    private:
        int cardNumber;
    public:
        CreditCardPayment(int cardn, float amount) : Payment(amount) {
            this->cardNumber = cardn;
        }

        void processPayment() override{
            std::cout << "Credit Card payment of " << this->getAmount() << "\nCard: " << this->cardNumber << std::endl;
        }
};

class PayPalPayment : public Payment {
    private:
        std::string email;
    public:
        PayPalPayment(std::string email, float amoount) : Payment(amoount) {
            this->email = email;
        }

        void processPayment() override {
            std::cout << "PayPal payment of " << this->getAmount() << "\nEmail: " << this->email << std::endl;
        }
};

class CashPayment : public Payment {
    public:
        CashPayment(float amount) : Payment(amount) {
            
        }

        void processPayment() override {
            std::cout << "Cash payment of " << this->getAmount() << std::endl;
        }
};

void showPayment(Payment& payment);

int main() {
    std::string op;
    Payment *payment = nullptr;

    while (std::cin >> op) {

        if (op == "CREDIT") {
            int cardn;
            float am;
            std::cin >> am >> cardn;
            
            payment = new CreditCardPayment(cardn, am);
        } else if (op == "PAYPAL") {
            std::string emal;
            float am;

            std::cin >> am >> emal;

            payment = new PayPalPayment(emal, am);
        } else if (op == "CASH") {
            float am;
            std::cin >> am;

            payment = new CashPayment(am);
        }

        showPayment(*payment);
    }
}

void showPayment(Payment& payment) {
    payment.processPayment();
};