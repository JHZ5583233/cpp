#include <iostream>
#include <string>

class LibraryBook {
    private:
        int bookId, totalCopies, borrowedCopies;
        std::string title;
    public:
        LibraryBook(int id, std::string title, int totalc) {
            this->bookId = id;
            this->title = title;
            this->totalCopies = totalc;
            this->borrowedCopies = 0;
        }
        void borrowBook() {
            if ((this->totalCopies - this->borrowedCopies) == 0) {
                std::cout << "NOT_AVAILABLE\n";
                return;
            }

            this->borrowedCopies++;
        }
        
        void returnBook() {
            if (this->borrowedCopies > 0) {
                this->borrowedCopies--;
                return;
            }

            std::cout << "INVALID_RETURN\n";
        }
        
        int availableCopies() {
            return this->totalCopies - this->borrowedCopies;
        }
};

int main() {
    int bookid, totalcopies;
    std::string tit;

    std::cin >> bookid;
    std::cin >> tit;
    std::cin >> totalcopies;

    LibraryBook book = LibraryBook(bookid, tit, totalcopies);
    
    int n;
    std::string op;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> op;

        if (op == "BORROW") {
            book.borrowBook();
        } else if (op == "RETURN") {
            book .returnBook();
        }
    }

    std::cout << book.availableCopies() << " " << totalcopies - book.availableCopies() << std::endl;
}