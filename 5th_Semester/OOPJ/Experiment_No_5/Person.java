import java.util.Calendar;

public class Person {
    String name;
    Calendar birthDate;
    float height;
    float weight;
    String address;

    public Person(String name, Calendar birthDate, float height, float weight, String address) {
        this.name = name;
        this.birthDate = birthDate;
        this.height = height;
        this.weight = weight;
        this.address = address;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Calendar getBirthDate() {
        return birthDate;
    }

    public void setBirthDate(Calendar birthDate) {
        this.birthDate = birthDate;
    }

    public float getHeight() {
        return height;
    }

    public void setHeight(float height) {
        this.height = height;
    }

    public float getWeight() {
        return weight;
    }

    public void setWeight(float weight) {
        this.weight = weight;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public int calulateAge() {
        long ageInMillis = Calendar.getInstance().getTimeInMillis() - this.birthDate.getTimeInMillis();

        Calendar age = Calendar.getInstance();
        age.setTimeInMillis(ageInMillis);
        return age.get(Calendar.YEAR);
    }

    @Override
    public String toString() {
        return "name='" + getName() + "'" + "\nbirthDate='" + getBirthDate().getTime() + "'" + "\nheight='"
                + getHeight() + "'" + "\nweight='" + getWeight() + "'" + "\naddress='" + getAddress() + "'";

    }

}
