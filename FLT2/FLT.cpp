#include <iostream>
using namespace std;
class Person
{
protected:
    string From;

public:
    void showInfoOfThatPerson()
    {
        cout << "\tPerson's From: " << From << endl;
    }
    Person()
    {
        cout << "Person: Constructor" << endl;
    }
    Person(string Fr)
    {
        From = Fr;
        cout << "Person: Parameterized" << endl;
    }
    ~Person()
    {
        cout << "Person: Destructor" << endl;
    }
};
class Employee : virtual public Person
{
protected:
    string EmpName, EmpID;

public:
    void showInfoOfThatEmployee()
    {
        cout << "\tEmployee's Name: " << EmpName << endl;
        cout << "\tEmployee's ID: " << EmpID << endl;
    }
    Employee()
    {
        cout << "Employee: Constructor" << endl;
    }
    Employee(string EN, string EID, string Fr) : Person(Fr)
    {
        EmpName = EN;
        EmpID = EID;
        cout << "Employee: Parameterized" << endl;
    }
    ~Employee()
    {
        cout << "Employee: Destructor" << endl;
    }
};
class Faculty : public Employee
{
protected:
    string Department;

public:
    void showInfoOfThatFaculty()
    {
        cout << "\tDepartment Of The Faculty: " << Department << endl;
    }
    Faculty()
    {
        cout << "Faculty: Constructor" << endl;
    }
    Faculty(string Dt, string EN, string EID, string Fr) : Employee(EN, EID, Fr), Person(Fr)
    {
        Department = Dt;
        cout << "Faculty: Parameterized" << endl;
    }
    ~Faculty()
    {
        cout << "Faculty: Destructor" << endl;
    }
};
class Officer : public Employee
{
protected:
    int RoomNo;

public:
    void showInfoOfThatOfficer()
    {
        cout << "\tOfficer's Room No: " << RoomNo << endl;
    }
    Officer()
    {
        cout << "Officer: Constructor" << endl;
    }
    Officer(int RN, string EN, string EID, string Fr) : Employee(EN, EID, Fr), Person(Fr)
    {
        RoomNo = RN;
        cout << "Officer: Parameterized" << endl;
    }
    ~Officer()
    {
        cout << "Officer: Destructor" << endl;
    }
};
class Student : virtual public Person
{
protected:
    string StudentName, StudentID;

public:
    void showInfoOfThatStudent()
    {
        cout << "\tStudent's Name: " << StudentName << endl;
        cout << "\tStudent ID: " << StudentID << endl;
    }
    Student()
    {
        cout << "Student: Constructor" << endl;
    }
    Student(string SN, string SID, string Fr) : Person(Fr)
    {
        StudentName = SN;
        StudentID = SID;
        cout << "Student: Parameterized" << endl;
    }
    ~Student()
    {
        cout << "Student: Destructor" << endl;
    }
};
class TA : public Student, public Employee
{
protected:
    int Time;

public:
    void showInfoOfTheTA()
    {
        cout << "\tToTal Working Time : " << Time << "Hours" << endl;
    }
    TA()
    {
        cout << "TA: Constructor" << endl;
    }
    TA(int T, string SN, string SID, string EN, string EID, string Fr) : Employee(EN, EID, Fr), Student(SN, SID, Fr), Person(Fr)
    {
        Time = T;
        cout << "TA: Parameterized" << endl;
    }
    ~TA()
    {
        cout << "TA: Destructor" << endl;
    }
};
class ScholarshipStudent : virtual public Student
{
protected:
    int Percentage;

public:
    void showInfoOfThatScholarshipStudent()
    {
        cout << "\tPercentage Of The Scholarship : " << Percentage << "%" << endl;
    }
    ScholarshipStudent()
    {
        cout << "ScholarshipStudent: Constructor" << endl;
    }
    ScholarshipStudent(int PT, string SN, string SID, string Fr) : Student(SN, SID, Fr), Person(Fr)
    {
        Percentage = PT;
        cout << "ScholarshipStudent : Parameterized. " << endl;
    }
    ~ScholarshipStudent()
    {
        cout << "ScholarshipStudent: Destructor" << endl;
    }
};
int main()
{
    Faculty Ft;
    Faculty Ft1("CSE", "Sajid-Bin-Faisal", "18-2134-3", "Dhaka");
    Ft1.showInfoOfThatFaculty();
    Ft1.showInfoOfThatEmployee();
    Ft1.showInfoOfThatPerson();
    Officer OF;
    Officer OF1(21, "Marjuk Russell", "65-3423-23", "Nowakhali");
    OF1.showInfoOfThatOfficer();
    OF1.showInfoOfThatEmployee();
    OF1.showInfoOfThatPerson();
    TA T;
    TA T1(20, "Abdul Rouf", "24-6513-8", "Abdul Rouf", "20-3213-4", "Netrokona");
    T1.showInfoOfTheTA();
    T1.showInfoOfThatStudent();
    T1.showInfoOfThatEmployee();
    T1.showInfoOfThatPerson();
    ScholarshipStudent ST;
    ScholarshipStudent ST1(70, "Mahmudul Hassan Ovi", "22-47381,2", "Mymensingh");
    ST1.showInfoOfThatScholarshipStudent();
    ST1.showInfoOfThatStudent();
    ST1.showInfoOfThatPerson();
}
