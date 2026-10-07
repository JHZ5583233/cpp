#include <cstdio>
#include <iostream>
#include <string>

class Student {
    private:
        int studentID, mark1, mark2, mark3;
        std::string name;
    public:
        Student(int studentID, std::string name, int mark1, int mark2, int mark3) {
            this->studentID = studentID;
            this->name = name;
            this->mark1 = mark1;
            this->mark2 = mark2;
            this->mark3 = mark3;
        }

        int calculateTotal() {
            return this->mark1 + this->mark2 + this->mark3;
        }
        
        int calculateAverage() {
            return this->calculateTotal()/3;
        }
        
        char getGrade() {
            int grade = this->calculateAverage();

            if (grade < 50) {
                return 'F';
            } else if (grade < 60) {
                return 'D';
            } else if (grade < 70) {
                return 'C';
            } else if (grade < 80) {
                return 'B';
            } else {
                return 'A';
            }
        }
};

int main() {
    int id, m1, m2, m3;
    std::string na;

    std::cin >> id;
    std::cin >> na;
    std::cin >> m1;
    std::cin >> m2;
    std::cin >> m3;
    
    Student stu = Student(id, na, m1, m2, m3);

    std::cout << stu.calculateTotal() << " " << stu.calculateAverage() << " " << stu.getGrade() << std::endl;
}