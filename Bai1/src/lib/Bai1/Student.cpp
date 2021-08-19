#include "Student.h"

// constructor
Student::Student() : super()
{
    this->_class = "No class";
}
Student::~Student()
{
    this->_class = "No class";
}
Student::Student(std::string name, std::string address, std::string department, std::string _class)
    : super(name, address, department)
{
    this->_class = _class;
}

// setter getter
void Student::setClass(std::string _class)
{
    this->_class = _class;
}
std::string Student::getClass()
{
    return this->_class;
}

void Student::print()
{
    super::print();
    std::cout << "Class: " << this->_class << '\n';
}
std::string Student::toString()
{
    return super::toString() + "Class: " + this->_class + "\n";
}