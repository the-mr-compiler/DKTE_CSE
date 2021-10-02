package MyMath;

/**
 * Arithmetic Operations
 */
public class Arithmetic {
    float x;
    float y;

    public Arithmetic(float x, float y) {
        this.x = x;
        this.y = y;
    }

    public float getX() {
        return this.x;
    }

    public float getY() {
        return this.y;
    }

    public void setX(float x) {
        this.x = x;
    }

    public void setY(float y) {
        this.y = y;
    }

    public float add() {
        return x + y;
    }

    public float subtract() {
        return x - y;
    }

    public float multiply() {
        return x * y;
    }

    public float divide() {
        return x / y;
    }
}