import java.util.Scanner;

public class InputProduct{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no 1");
		int a = sc.nextInt();
		System.out.println("Enter no 2");
		int b = sc.nextInt();
		int product = a*b;
		System.out.println("Product of two no is :"+product);
}
}