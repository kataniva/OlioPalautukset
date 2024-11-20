#include "student.h"

string Student::getFname() const
{
    return Fname;
}

void Student::setFname(const string &newFname)
{
    Fname = newFname;
}

string Student::getLname() const
{
    return Lname;
}

void Student::setLname(const string &newLname)
{
    Lname = newLname;
}

string Student::getEmail() const
{
    return Email;
}

void Student::setEmail(const string &newEmail)
{
    Email = newEmail;
}

void Student::studentInfo()
{
    cout << "Opiskelijan tiedot: " << endl;
    cout << "Nimi: " << Fname << " " << Lname << endl;
    cout << "Email: " << Email << endl;
    if (age == 0) {
        cout << "Ika= " << age << endl;
    }
    cout << "--------------------------" << endl;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    if(age<=0) {
        age = 0;
    }
    age = newAge;
}

Student::Student()
{

}

Student::Student(string fn, string ln, string em, int a)
{
    Fname=fn;
    Lname=ln;
    Email=em;
    setAge(a);
}
