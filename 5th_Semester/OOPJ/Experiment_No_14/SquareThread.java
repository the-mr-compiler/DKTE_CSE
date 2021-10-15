public class SquareThread extends Thread {
    int i;

    public SquareThread(int i) {
        this.i = i * i;
    }

    @Override
    public void run() {
        System.out.println("Square = " + i);
    }
}
