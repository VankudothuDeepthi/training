#include "student.h"
#include <iostream>

Student::Student(int i) {
    id = i;
}

void Student::display() {
    std::cout << "Student ID: " << id << std::endl;
}

