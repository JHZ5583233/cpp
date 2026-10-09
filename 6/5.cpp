#include <cstddef>
#include <iostream>
#include <string>


class Inventory {
    private:
        std::size_t id_gen;
        std::size_t *array;
        std::size_t amount;

        void reallocate(std::size_t id) {
            std::size_t *new_array = new std::size_t[amount - 1];

            int new_index = 0;
            for (int i = 0; i < amount; i++) {
                if (array[i] != id) {
                    new_array[new_index] = array[i];
                    new_index++;
                }
            }

            delete [] array;
            array = new_array;
            amount--;
        }
    public:
        Inventory(std::size_t size) {
            this->id_gen = 0;
            this->amount = 0;
            this->array = new std::size_t[this->amount];

            for (int i = 0; i < size; i++) {
                this->add();
            }
        }

        ~Inventory() {
            delete [] array;
        }

        void sell(std::size_t id) {
            this->reallocate(id);

            std::cout << "Sold product with Id " << id << "\n";
        }

        void add() {
            this->id_gen++;
            std::size_t *new_array = new std::size_t[amount + 1];

            for (int i = 0; i < amount; i++) {
                new_array[i] = array[i];
            }

            new_array[amount] = this->id_gen;
            delete [] array;
            array = new_array;
            this->amount++;
        }

        void print() {
            for (int i = 0; i < (amount - 1); i++) {
                std::cout << array[i] << " ";
            }

            std::cout << array[amount - 1] << "\n";
        }
};

int main() {
    std::size_t n;
    std::cin >> n;

    Inventory inv = Inventory(n);

    std::string command;
    while (std::cin >> command) {
        if (command == "Add") {
            inv.add();
        } else if (command == "Sell") {
        
        }{
            std::size_t id;
            std::cin >> id;

            inv.sell(id);
        }
    }

    inv.print();
    std::cout << std::endl;
}