import java.io.*;
import java.util.Scanner;

public class ReadFile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter file name:");
        String filename = sc.nextLine();
        try {
            FileInputStream reader = new FileInputStream(filename);
            int i;
            System.out.println("File content:");
            while ((i = reader.read()) != -1) {
                System.out.print((char) i);
            }
            System.out.println("\n");
            reader.close();
        } catch (FileNotFoundException e) {
            System.err.println("Specified file does not exist: " + filename);
        } catch (IOException e) {
            System.out.println("Error while reading the file");
        }

        System.out.println("Do you want to add content to the file? (y/n) :");
        char r = sc.nextLine().toCharArray()[0];
        if (r == 'y' || r == 'Y') {
            try {
                FileOutputStream writer = new FileOutputStream(filename, true);
                System.out.println("Enter content to write:");
                String content = sc.nextLine();
                writer.write(content.getBytes());
                writer.close();
            } catch (IOException e) {
                System.out.println("Unexpected error while writing to file: " + filename);
            }

        }
        sc.close();
    }
}
