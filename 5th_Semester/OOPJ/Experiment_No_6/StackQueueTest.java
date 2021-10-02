import java.util.Scanner;

public class StackQueueTest {
    public static void main(String[] args) {
        System.out.println("Enter array size");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        while (size <= 0) {
            System.out.println("Invalid size please reenter..");
            size = sc.nextInt();
        }
        StackQueue stackQueue = new StackQueue(size);
        int ch = 1;
        int el;
        while (ch != 7) {

            System.out.println("\nOptions\n1. Enque\n2. Deque\n3. Push\n4. Pop\n5. Peek\n6. Display\n7. Exit");
            ch = sc.nextInt();
            switch (ch) {
                case 1:
                    System.out.println("Enter element to enque :");
                    if (stackQueue.enqueue(sc.nextInt()) == 1)
                        System.out.println("Element inserted");
                    else
                        System.out.println("queue overflow");
                    break;
                case 2:
                    el = stackQueue.dequeue();
                    if (el != -1)
                        System.out.println("Elemetn: " + el);
                    else
                        System.out.println("Empty queue");
                    break;
                case 3:
                    System.out.println("Enter element to push :");
                    if (stackQueue.push(sc.nextInt()) != -1)
                        System.out.println("Element inserted");
                    else
                        System.out.println("Stack Full");
                    break;

                case 4:
                    el = stackQueue.pop();
                    if (el != -1)
                        System.out.println(el + " popped");
                    else
                        System.out.println("Stack underflow ");
                    break;
                case 5:
                    el = stackQueue.peek();
                    if (el != -1)
                        System.out.println(el + " is at top");
                    else
                        System.out.println("Stack is empty");
                    break;
                case 6:
                    stackQueue.display();
                    break;
                case 7:
                    break;
                default:
                    System.out.println("Invalid choice..!");
            }
            System.out.println("\nPress Enter to continue..");
            sc.nextLine();
            sc.nextLine();
            System.out.println("\033[H\033[2J");
            System.out.flush();
        }
        sc.close();
    }
}
