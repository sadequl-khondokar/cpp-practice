#include <iostream>

class Person
{
public:
    Person()
    {
        std::cout << "Person: Instance" << std::endl;
    }
    ~Person()
    {
        std::cout << "Person: Destructor"<<std::endl;
    }
};

class Employee : public Person
{
public:
    Employee()
    {
        std::cout << "Employee: Instance" << std::endl;
    }
    ~Employee()
    {
        std::cout << "Employee: Destructor"<<std::endl;
    }
};

class Student : public Person
{
public:
    Student()
    {
        std::cout << "Student: Instance" << std::endl;
    }
    ~Student()
    {
        std::cout << "Student: Destructor"<<std::endl;
    }
};

class Faculty : public Employee
{
public:
    Faculty()
    {
        std::cout << "Faculty: Instance" << std::endl;
    }
    ~Faculty()
    {
        std::cout << "Faculty: Destructor"<<std::endl;
    }
};

class Officer : public Employee
{
public:
    Officer()
    {
        std::cout << "Officer: Instance" << std::endl;
    }
    ~Officer()
    {
        std::cout << "Officer: Destructor"<<std::endl;
    }
};

class TA : public Employee, public Student
{
public:
    TA()
    {
        std::cout << "Person: Instance" << std::endl;
    }
    ~TA()
    {
        std::cout << "TA: Destructor"<<std::endl;
    }
};

class ScholarshipStudent : public Student
{
public:
    ScholarshipStudent()
    {
        std::cout << "ScholarshipStudent: Instance" << std::endl;
    }
    ~ScholarshipStudent()
    {
        std::cout << "ScholarshipStudent: Destructor"<<std::endl;
    }
};

int main()
{
    ScholarshipStudent t;
}