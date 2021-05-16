#include "Student.h"

Student::Student()
{
    this->age = 0;
    this->name = "";
    this->sscMarks = 0;
    this->hscMarks = 0;
}
Student::Student(string name, int age, float sscMarks, float hscMarks)
{
    this->name = name;
    this->age = age;
    this->sscMarks = sscMarks;
    this->hscMarks = hscMarks;
}

void Student::setName(string name) { this->name = name; }
void Student::setAge(int age) { this->age = age; }
void Student::setSscMarks(float marks) { this->sscMarks = marks; }
void Student::setHscMarks(float marks) { this->hscMarks = marks; }

string Student::getName() { return this->name; }
int Student::getAge() { return this->age; }
float Student::getHscMarks() { return this->hscMarks; }
float Student::getSscMarks() { return this->sscMarks; }

int Student::validate()
{
    if (this->age > 18)
        throw INVALID_AGE;
    if (this->sscMarks < 65)
        throw INVALID_SSC_MARKS;
    if (this->hscMarks < 65)
        throw INVALID_HSC_MARKS;
    return 1;
}