#include "Teacher.h"

// constructor
Teacher::Teacher() : super()
{
    this->rank = "No rank";
}
Teacher::~Teacher()
{
    this->rank = "No rank";
}
Teacher::Teacher(std::string name, std::string address, std::string department, std::string rank)
    : super(name, address, department)
{
    this->rank = rank;
}
// setter, getter
void Teacher::setRank(std::string rank)
{
    this->rank = rank;
}
std::string Teacher::getRank()
{
    return this->rank;
}

void Teacher::print()
{
    std::cout << "Teacher information\n";
    super::information();
    std::cout << "Rank: " << this->rank << '\n';
}
std::string Teacher::toString()
{
    return super::info() + "Rank: " + this->rank + '\n';
}