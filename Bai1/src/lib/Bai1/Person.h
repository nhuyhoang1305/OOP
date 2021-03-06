#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

// ------------- Person ----------------
class Person
{
private:
    std::string name;
    std::string address;
    std::string department;

public:
    typedef Person super;
    // constructor
    Person();
    ~Person();
    Person(std::string name, std::string address, std::string department);

    // setter, getter
    void setName(std::string name);
    void setAddress(std::string address);
    void setDepartment(std::string department);
    std::string getName();
    std::string getAddress();
    std::string getDepartment();
    void information();
    std::string info();
    
    virtual void print() = 0;
    virtual std::string toString() = 0;
};
#endif