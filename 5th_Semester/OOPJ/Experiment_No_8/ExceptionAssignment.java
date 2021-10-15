import java.util.*;

public class ExceptionAssignment {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a=0, b=0;
        int c = 0;
        Operation o = new Operation();
        while (c != 5) {
            System.out.println("\n\n1:Addition\t2:Subtraction\n3:Multiplication\t4:Division\n5.Exit");
            System.out.println("Enter your choice:");
            c = sc.nextInt();
            if (c != 5) {
                System.out.println("Enter first number:");
                a = sc.nextInt();
                System.out.println("Enter second number:");
                b = sc.nextInt();
            }
            try {
                switch (c) {
                    case 1:
                        System.out.println("Addition is "+ o.add(a, b));
                        break;
                    case 2:
                        System.out.println("Subtraction is "+ o.sub(a, b));
                        break;
                    case 3:
                        System.out.println("Multiplication is "+o.mul(a, b));
                        break;
                    case 4:
                        System.out.println("Division is "+ o.div(a, b));
                        break;
                    case 5:break;
                    default:
                        System.out.println("Invalid Input");
                }
            } catch (MyException e) {
                System.out.println(e);
            }
        }
        sc.close();
    }
}