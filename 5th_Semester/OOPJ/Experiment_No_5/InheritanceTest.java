import java.util.Calendar;

public class InheritanceTest {
    public static void main(String[] args) {
        Calendar date = Calendar.getInstance();
        date.set(2001, 3, 6);
        System.out.println("\nStudents Details :");

        Student student = new Student("Meghanath", date, 170, 54, "MHL", 1, new float[] { 90, 92, 95, 93 });
        System.out.println(student);
        System.out.println("Age : " + student.calulateAge());
        System.out.println("Average Marks : " + student.calculateAvg());

        System.out.println("\nEmployee Details :");

        Employee emp = new Employee("Meghanath", date, 170, 54, "MHL", 1, 50000);
        System.out.println(emp);
        System.out.println("Age : " + emp.calulateAge());
        System.out.println("Tax : " + emp.calculateTax());
    }
}
