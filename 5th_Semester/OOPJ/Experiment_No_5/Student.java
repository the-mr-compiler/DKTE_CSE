import java.util.Calendar;

public class Student extends Person {
    int rollNo;
    float marks[];

    public Student(String name, Calendar birthDate, float height, float weight, String address, int rollNo,
            float marks[]) {
        super(name, birthDate, height, weight, address);
        this.rollNo = rollNo;
        this.marks = marks;
    }

    public void setRollNo(int rollNo) {
        this.rollNo = rollNo;
    }

    public int getRollNo() {
        return rollNo;
    }

    public void setMarks(float marks[]) {
        this.marks = marks;
    }

    public float[] getMarks() {
        return marks;
    }

    public float calculateAvg() {
        float sum = 0;
        for (float mark : marks) {
            sum += mark;
        }
        return sum / marks.length;
    }

    @Override
    public String toString() {
        StringBuilder mark = new StringBuilder();
        for (float f : marks) {
            mark.append(f + ", ");
        }
        return super.toString() + "\nrollNo='" + getRollNo() + "'" + "\nmarks='" + mark + "'";
    }

}
