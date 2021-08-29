import java.util.Calendar;

public class Employee extends Person {
    int empId;
    float salary;

    public Employee(String name, Calendar birthDate, float height, float weight, String address, int empId,
            float salary) {
        super(name, birthDate, height, weight, address);
        this.empId = empId;
        this.salary = salary;
    }

    public void setEmpId(int empId) {
        this.empId = empId;
    }

    public int getEmpId() {
        return this.empId;
    }

    public void setSalary(float salary) {
        this.salary = salary;
    }

    public float getSalary() {
        return this.salary;
    }

    public float calculateTax() {
        float tax = salary;
        if (salary <= 50000) {
            tax *= 0.01;
        } else if (salary <= 75000) {
            tax *= 0.02;
        } else if (salary <= 100000) {
            tax *= 0.03;
        } else if (salary <= 250000) {
            tax *= 0.04;
        } else if (salary <= 500000) {
            tax *= 0.05;
        } else
            tax *= 0.06;
        return tax;
    }

    @Override
    public String toString() {
        return super.toString() + "\nempId='" + getEmpId() + "'" + "\nsalary='" + getSalary() + "'";
    }

}
