#include "Teacher.h"
#include "Student.h"

// ------------- Class ---------------
class Class
{
private:
    std::string name;
    int numberOfStudents;
    Student *studentList;
    Teacher advisor;

public:
    // contructor
    Class();
    ~Class();
    Class(std::string name, int numberOfStudents, Student *studentList, Teacher advisor);

    // getter, setter
    std::string getName();
    void setName(std::string name);
    int getNumberOfStudents();
    void setNumberOfStudents(int numberOfStudents);
    Student *getStudentList();
    void setStudentList(Student *studentList);
    Teacher getAdvisor();
    void setAdvisor(Teacher advisor);
    void printList();
};