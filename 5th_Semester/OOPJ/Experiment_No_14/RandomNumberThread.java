public class RandomNumberThread extends Thread {
    int max;

    public RandomNumberThread(int max) {
        this.max = max;
    }

    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(1000);
            } catch (Exception e) {
                System.out.println(e);
            }
            int i = (int) (Math.random() * this.max);
            if (i % 2 == 0) {
                SquareThread sq = new SquareThread(i);
                sq.start();
            } else {
                CubeThread c = new CubeThread(i);
                c.start();
            }
        }
    }

    public static void main(String[] args) {
        RandomNumberThread rad = new RandomNumberThread(1000);
        rad.start();
    }
}
