#include "Person.h"

class Manager:protected Person
{
    private:
        int empId;
        float salary;
    public:
        void addEmployee();
        void viewEmployees();
        void addProduct();
        void viewProduct();
        void setEmpId(int empId);
        int getEmpId();
        void setSalary(float salary);
        float getSalary();
};