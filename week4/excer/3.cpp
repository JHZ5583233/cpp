#include <iostream>
#include <string>

class Product {
    private:
        int productId, quantity, price;
        std::string productName;
    public:
        Product(int id, std::string Name, int quantity, int price) {
            this->productId = id;
            this->productName = Name;
            this->quantity = quantity;
            this->price = price;
        }

        void restock(int amount) {
            this->quantity += amount;
        }
        
        void sell(int amount) {
            if (amount > this->quantity) {
                std::cout << "OUT_OF_STOCK\n";
                return;
            }

            this->quantity -= amount;
        }
        
        int inventoryValue() {
            return this->getQuantity() * this->price;
        }
        
        int getQuantity() {
            return this->quantity;
        }

};

int main() {
    int id;
    std::string name;

    std::cin >> id;
    std::cin >> name;

    int quan, price;
    std::cin >> quan;
    std::cin >> price;

    Product pro = Product(id, name, quan, price);

    int n;
    std::cin >> n;

    std::string op;
    int u;
    for (int i = 0; i < n; i++) {
        std::cin >> op;
        std::cin >> u;

        if (op == "SELL") {
            pro.sell(u);
        } else if (op == "RESTOCK") {
            pro.restock(u);
        }
    }

    std::cout << pro.getQuantity() << " " << pro.inventoryValue() << std::endl;
}