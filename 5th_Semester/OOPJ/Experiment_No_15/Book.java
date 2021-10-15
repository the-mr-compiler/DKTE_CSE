import java.util.Scanner;

public class Book {
    private int bookId;
    private String bookName;
    private String author;
    private String publisher;
    private int quantity;

    public Book() {

    }

    public Book(int bookId, String bookName, String author, String publisher, int quantity) {
        this.bookId = bookId;
        this.bookName = bookName;
        this.author = author;
        this.publisher = publisher;
        this.quantity = quantity;
    }

    @Override
    public String toString() {
        return "bookId='" + getBookId() + "'" + ", bookName='" + getBookName() + "'" + ", author='" + getAuthor() + "'"
                + ", publisher='" + getPublisher() + "'" + ", quantity='" + getQuantity() + "'";
    }

    public int getBookId() {
        return this.bookId;
    }

    public void setBookId(int bookId) {
        this.bookId = bookId;
    }

    public String getBookName() {
        return this.bookName;
    }

    public void setBookName(String bookName) {
        this.bookName = bookName;
    }

    public String getAuthor() {
        return this.author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getPublisher() {
        return this.publisher;
    }

    public void setPublisher(String publisher) {
        this.publisher = publisher;
    }

    public int getQuantity() {
        return this.quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
}