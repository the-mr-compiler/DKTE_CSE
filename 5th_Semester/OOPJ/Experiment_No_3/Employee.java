public class Employee {
    private String firstname;
    private String lastname;
    private double msalary;

    public Employee() {
        firstname = "";
        lastname = "";
        msalary = 0;
    }

    public void setFirstname(String firstname) {
        this.firstname = firstname;
    }

    public void setLastname(String lastname) {
        this.lastname = lastname;
    }

    public void setMsalary(double msalary) {

        this.msalary = msalary > 0 ? msalary : 0.0;
    }

    public String getFirstname() {
        return this.firstname;
    }

    public String getLastname() {
        return this.lastname;
    }

    public double getMsalary() {
        return this.msalary;
    }

    public Employee(String firstname, String lastname, double msalary) {
        this.firstname = firstname;
        this.lastname = lastname;
        this.msalary = msalary;
    }

    public double getYearlySalary() {
        return this.msalary * 12;
    }

    public double incrementSalaryBy(double incrementByPercentage) {
        this.msalary = msalary + ((msalary * incrementByPercentage) / 100);
        return this.msalary;
    }
}