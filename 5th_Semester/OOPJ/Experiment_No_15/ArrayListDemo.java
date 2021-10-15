import java.util.ArrayList;

public class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList<Book> bookList = new ArrayList<Book>();
        bookList.add(new Book(1, "The First", "I'm Author", "I'm Publisher", 123));
        bookList.add(new Book(2, "The Second", "I'm Author", "I'm Publisher", 123));
        bookList.add(new Book(3, "The Third", "I'm Author", "I'm Publisher", 123));
        System.out.println("Size of list : " + bookList.size());
        System.out.println("\nElements from list are :");
        for (Book b : bookList) {
            System.out.println(b);
        }
        bookList.remove(1);
        System.out.println("\nElements from list after removing one are :");
        for (Book b : bookList) {
            System.out.println(b);
        }
    }
}
