package MyMath;

/**
 * Statistical Operations
 */

public class Stat {
    private float array[];

    public Stat(float[] array) {
        this.array = array;
    }

    public void setArray(float[] array) {
        this.array = array;
    }

    public float[] getArray() {
        return this.array;
    }

    public float getMin() {
        float min = array[0];
        for (float element : array) {
            if (element < min)
                min = element;
        }
        return min;
    }

    public float getMax() {
        float max = array[0];
        for (float f : array) {
            if (f > max)
                max = f;
        }
        return max;

    }

    public float getCount() {
        return array.length;
    }

    public float getSum() {
        float sum = 0;
        for (float element : array)
            sum += element;
        return sum;
    }

    public float getAverage() {
        return getSum() / array.length;
    }

}
