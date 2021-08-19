#include "Class.h"

// constructor
Class::Class()
{
    this->name = "No name";
    this->numberOfStudents = 0;
}
Class::~Class()
{
    this->name = "No name";
    this->numberOfStudents = 0;
    delete[] studentList;
    this->advisor.~Teacher();
}
Class::Class(std::string name, int numberOfStudents, Student *studentList, Teacher advisor)
{
    this->name = name;
    this->numberOfStudents = numberOfStudents;
    this->studentList = studentList;
    this->advisor = advisor;
}

// getter, setter
std::string Class::getName()
{
    return this->name;
}
void Class::setName(std::string name)
{
    this->name = name;
}

int Class::getNumberOfStudents()
{
    return this->numberOfStudents;
}

void Class::setNumberOfStudents(int numberOfStudents)
{
    this->numberOfStudents = numberOfStudents;
}

Student *Class::getStudentList()
{
    return this->studentList;
}

void Class::setStudentList(Student *studentList)
{
    this->studentList = studentList;
}

Teacher Class::getAdvisor()
{
    return this->advisor;
}

void Class::setAdvisor(Teacher advisor)
{
    this->advisor = advisor;
}

void Class::printList()
{
    std::cout << "Class name: " << this->name << '\n';
    std::cout << "Advisor: \n";
    this->advisor.print();
    std::cout << "Number of Students: " << this->numberOfStudents << '\n';
    for (int i = 0; i < numberOfStudents; ++i)
    {
        studentList[i].print();
    }
}