#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;
    float sscMarks, hscMarks;

public:
    Student();
    Student(string name, int age, float sscMarks, float hscMarks);
    void setName(string name);
    string getName();
    int getAge();
    void setAge(int age);
    float getSscMarks();
    void setSscMarks(float marks);
    float getHscMarks();
    void setHscMarks(float marks);
    int validate();
    static const int INVALID_AGE = 1;
    static const int INVALID_SSC_MARKS = 2;
    static const int INVALID_HSC_MARKS = 3;
};