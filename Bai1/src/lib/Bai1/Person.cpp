#include "Person.h"

// constructor
Person::Person()
{
    this->name = "No name";
    this->address = "No address";
    this->department = "No department";
};

Person::Person(std::string name, std::string address, std::string department)
{
    this->name = name;
    this->address = address;
    this->department = department;
};

Person::~Person()
{
}

// setter, getter
void Person::setName(std::string name)
{
    this->name = name;
}
void Person::setAddress(std::string address)
{
    this->address = address;
}
void Person::setDepartment(std::string department)
{
    this->department = department;
}
std::string Person::getName()
{
    return this->name;
}
std::string Person::getAddress()
{
    return this->address;
}
std::string Person::getDepartment()
{
    return this->department;
}

void Person::print()
{
    std::cout << "Name: " << this->name << '\n';
    std::cout << "Address: " << this->address << '\n';
    std::cout << "Department: " << this->department << '\n';
}

std::string Person::toString()
{
    return "Name: " + this->name + "\nAddress: " + this->address + "\nDepartment: " + this->department + '\n';
}
