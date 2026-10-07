#include <iostream>
#include <string>

class Student {
    private:
        std::string name;
        int mark;
    public:
        Student(std::string name, int mark) {
            this->name = name;
            this->mark = mark;
        }

        ~Student() {
            std::cout << "MEMORY FREED\n";
        }

        char getGrade() {
            if (this->mark < 40) {
                return 'F';
            } else if (this->mark < 60) {
                return 'C';
            } else if (this->mark < 80) {
                return 'B';
            } else {
                return 'A';
            }
        }
};

int main() {
    std::string name;
    int mark;
    std::cin >> name >> mark;
    Student *s = new Student(name, mark);

    std::cout << s->getGrade() << "\n";

    delete s;
}