#include "Manager.h"

void Manager::setEmpId(int empId)
{
    this->empId=empId;
}
int Manager::getEmpId()
{
    return this->empId;
}
void Manager::setSalary(float salary)
{
    this->salary=salary;
}
float Manager::getSalary()
{
    return this->salary;
}
void Manager::addEmployee()
{
    cout<<"\nEmployee Added";
}
void Manager::viewEmployees()
{
    cout<<"\nEmployee List";
}
void Manager::addProduct()
{
    cout<<"\nNew Product Added Successfully";
}