#include "Student.h"

int main()
{
    Student stud;
    cout << "Enter student name :";
    string name;
    cin >> name;
    stud.setName(name);
    int age;
    cout << "Enter age :";
    cin >> age;
    stud.setAge(age);
    float marks;
    cout << "Enter SSC marks:";
    cin >> marks;
    stud.setSscMarks(marks);
    cout << "Enter HSC marks:";
    cin >> marks;
    stud.setHscMarks(marks);
    try
    {
        if (stud.validate())
            cout << "Entered data is valid";
    }
    catch (int ex)
    {
        cout << ex;
        if (ex == Student::INVALID_AGE)
            cout << "\nInvalid Age";
        if (ex == Student::INVALID_SSC_MARKS)
            cout << "\nInvalid SSC Marks";
        if (ex == Student::INVALID_HSC_MARKS)
            cout << "\nInvalid HSC Marks";
    }
}