package MyMath;

/**
 * Trignometric Operations
 */

public class Trig {
    private double angle;

    public Trig(double angleInDegrees) {
        this.angle = angleInDegrees;
    }

    public double getAngle() {
        return angle;
    }

    public void setAngle(double angle) {
        this.angle = angle;
    }

    public double getSine() {
        return Math.sin(Math.toRadians(angle));
    }

    public double getCosine() {
        return Math.cos(Math.toRadians(angle));
    }

    public double getTangent() {
        return Math.tan(Math.toRadians(angle));
    }

    public double getSecant() {
        return 1 / Math.sin(Math.toRadians(angle));
    }

    public double getCosecant() {
        return 1 / Math.cos(Math.toRadians(angle));
    }

    public double getCotangent() {
        return 1 / Math.tan(Math.toRadians(angle));
    }
}