import java.util.Scanner;
import MyMath.*;

public class PackDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter angle in radians: ");
        double angle = sc.nextDouble();
        Trig newTrig = new Trig(Math.toDegrees(angle));
        System.out.println("Sine = " + newTrig.getSine());
        System.out.println("Cosecant = " + newTrig.getCosecant());
        System.out.println("Tangent = " + newTrig.getTangent());
        System.out.println("Cosine = " + newTrig.getCosine());
        System.out.println("Cotangent = " + newTrig.getCotangent());
        System.out.println("Secant = " + newTrig.getSecant());
        System.out.println("\n\nEnter two numbers: ");
        float x = sc.nextFloat(), y = sc.nextFloat();
        Arithmetic maths = new Arithmetic(x, y);
        System.out.format("Addition of %f and %f is %f", x, y, maths.add());
        System.out.format("\nSubstraction of %f and %f is %f", x, y, maths.subtract());
        System.out.format("\nMultiplication of %f and %f is %f", x, y, maths.multiply());
        System.out.format("\nDivision of %f and %f is %f", x, y, maths.divide());

        System.out.println("\n\nEnter Array Size for stats: ");
        int size = sc.nextInt();
        float arr[] = new float[size];
        System.out.println("Enter array elements :");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextFloat();
        }
        Stat stats = new Stat(arr);
        System.out.format("Min from array is %f", stats.getMin());
        System.out.format("\nMax from array is %f", stats.getMax());
        System.out.format("\nCount of array elements is %f", stats.getCount());
        System.out.format("\nSum of array elements is %f", stats.getSum());
        System.out.format("\nAverage of array elements is %f", stats.getAverage());
        sc.close();
    }
}
