public class CubeThread extends Thread {
    int i = 0;

    public CubeThread(int i) {
        this.i = i * i * i;
    }

    @Override
    public void run() {
        System.out.println("Cube = " + i);
    }
}
