#include "Person.h"

// ------------- Teacher --------------
class Teacher : public Person
{
private:
    std::string rank;

public:
    // constructor
    Teacher();
    ~Teacher();
    Teacher(std::string name, std::string address, std::string department, std::string rank);
    // setter, getter
    void setRank(std::string rank);
    std::string getRank();

    void print();
    std::string toString();
};