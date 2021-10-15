import java.io.*;
import java.util.Scanner;

public class StudentInfo {
    int rollNo;
    String className;
    int age;
    int weight;
    int height;
    String city;
    String phone;

    public void getDetails(DataInputStream stream) throws IOException {
        System.out.println("Enter student details :");
        try {
            System.out.println("Enter rollNo: ");
            rollNo = Integer.parseInt(stream.readLine());
            System.out.println("Enter className: ");
            className = stream.readLine();
            System.out.println("Enter age: ");
            age = Integer.parseInt(stream.readLine());
            System.out.println("Enter weight:");
            weight = Integer.parseInt(stream.readLine());
            System.out.println("Enter height:");
            height = Integer.parseInt(stream.readLine());
            System.out.println("Enter city:");
            city = stream.readLine();
            System.out.println("Enter phone:");
            phone = stream.readLine();
        } catch (NumberFormatException | IOException e) {
            System.out.println("Error while reading file");
        } finally {
            stream.close();
        }

    }

    @Override
    public String toString() {
        String info = String.format("RollNo=%d\nClassName=%s\nAge=%d\nWeight=%d\nHeight=%d\nCity=%s\nPhone=%s", rollNo,
                className, age, weight, height, city, phone);
        return info;
    }

    public void writeDetails(FileOutputStream stream) throws IOException {
        String info = String.format("%d\n%s\n%d\n%d\n%d\n%s\n%s", rollNo, className, age, weight, height, city, phone);
        stream.write(info.getBytes());
    }

    public void readDetails(FileInputStream stream) throws IOException {
        String s[] = new String(stream.readAllBytes()).split("\n");
        if (s.length != 7)
            throw new IOException("No data found");

        rollNo = Integer.parseInt(s[0]);
        className = s[1];
        age = Integer.parseInt(s[2]);
        weight = Integer.parseInt(s[3]);
        height = Integer.parseInt(s[4]);
        city = s[5];
        phone = s[6];
    }

    public static void main(String[] args) {
        Scanner sc;
        StudentInfo info = new StudentInfo();
        try {
            FileInputStream fis = new FileInputStream("student.txt");
            info.readDetails(fis);
            System.out.println("Existing data in file :");
            System.out.println(info);
            fis.close();
        } catch (IOException e) {
            if (e.getMessage().equals("No data found")) {
                System.out.println("No existing data found");
            }
        }
        int c = 0;
        while (c != 3) {
            try {
                System.out.println("Menu :\n1. Read\n2. Write\n3. Exit");
                System.out.println();
                sc = new Scanner(System.in);
                c = sc.nextInt();
                sc.close();
                switch (c) {
                    case 1:
                        FileInputStream fis = new FileInputStream("student.txt");
                        info.readDetails(fis);
                        System.out.println("Existing data in file :");
                        System.out.println(info);
                        fis.close();
                        break;
                    case 2:
                        info.getDetails(new DataInputStream(System.in));
                        FileOutputStream fout = new FileOutputStream("student.txt");
                        info.writeDetails(fout);
                        fout.close();
                        System.out.println("\nData written to file successfully");
                        break;
                    default:
                        break;
                }
            } catch (IOException e) {
                if (e.getMessage().equals("No data found")) {
                    System.out.println("No existing data found");
                }
            }
        }
    }
}