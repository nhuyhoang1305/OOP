#include "Person.h"
// ------------- Student --------------
class Student : public Person
{
private:
    std::string _class;

public:
    // constructor
    Student();
    ~Student();
    Student(std::string name, std::string address, std::string department, std::string _class);

    // setter getter
    void setClass(std::string _class);
    std::string getClass();

    void print();
    std::string toString();
};