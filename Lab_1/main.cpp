#include <iostream>
#include "student.hpp"

int main() {
    // Создание студентов
    Student student1("Ivanov", 20, 4.5);
    Student student2("Petrov", 22, 4.7);

    // Вывод данных студентов
    std::cout << "Student 1:\n";
    student1.display();
    
    std::cout << "\nStudent 2:\n";
    student2.display();

    // Сложение студентов
    Student student3 = student1 + student2;
    std::cout << "\nAverage of Student 1 and Student 2:\n";
    student3.display();

    return 0;
}
