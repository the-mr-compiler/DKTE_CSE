import java.util.Scanner;

public class MatrixTest {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter dimensions of first matrix rows and columns respectively : ");
        Matrix a = new Matrix(sc.nextInt(), sc.nextInt());
        System.out.println("Enter elements of first matrix :\n");
        a.initMatrix(sc);
        System.out.println("Enter dimensions of second matrix rows and columns respectively : ");
        Matrix b = new Matrix(sc.nextInt(), sc.nextInt());
        System.out.println("Enter elements of second matrix :\n");
        b.initMatrix(sc);
        System.out.println("Addition of first and second matrix is :\n" + a.addition(b));
        System.out.println("Substraction of first and second matrix is :\n" + a.subtraction(b));
        System.out.println("Multiplication of first and second matrix is :\n" + a.multiplication(b));
        System.out.println("Division of first and second matrix is :\n" + a.division(b));
        System.out.println("Transpose of first matrix is :\n" + a.transpose());
        System.out.println("Enter scale factor : ");
        double scale = sc.nextDouble();
        System.out.println("First matrix after scalling by " + scale + " :\n" + a.scaleMatrix(scale));
    }
}