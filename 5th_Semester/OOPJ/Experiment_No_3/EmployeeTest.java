import java.util.Scanner;

public class EmployeeTest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Employee employee1 = new Employee();
        Employee employee2 = new Employee();
        System.out.println("\nEnter first employee details :");
        System.out.println("First name :");
        employee1.setFirstname(scanner.nextLine());
        System.out.println("Last name :");
        employee1.setLastname(scanner.nextLine());
        System.out.println("Monthly salary :");
        employee1.setMsalary(scanner.nextDouble());
        scanner.reset();
        scanner = new Scanner(System.in);
        System.out.println("First name :");
        employee2.setFirstname(scanner.nextLine());
        System.out.println("Last name :");
        employee2.setLastname(scanner.nextLine());
        System.out.println("Monthly salary :");
        employee2.setMsalary(scanner.nextDouble());
        scanner.reset();
        System.out.println("\nDetails of first employee : ");
        System.out.println("Employee Details : \nFirstname : " + employee1.getFirstname() + "\nLastname : "
                + employee1.getLastname() + "\nMonthly salary :" + employee1.getMsalary());
        System.out.println("\nDetails of second employee : ");
        System.out.println("Employee Details : \nFirstname : " + employee2.getFirstname() + "\nLastname : "
                + employee2.getLastname() + "\nMonthly salary :" + employee2.getMsalary());
        System.out.println("\nYearly salary of first employee :" + employee1.getYearlySalary());
        System.out.println("\nYearly salary of second employee :" + employee2.getYearlySalary());
        employee1.incrementSalaryBy(10);
        employee2.incrementSalaryBy(10);
        System.out.println("\nIncremented salary of first employee :" + employee1.getYearlySalary());
        System.out.println("\nIncremented salary of second employee :" + employee2.getYearlySalary());

        scanner.close();
    }
}
