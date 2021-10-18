package Exp03;

import java.sql.*;
import java.util.Scanner;

public class Dml {
    public static void main(String[] args) {
        try {
            Class.forName("oracle.jdbc.OracleDriver");
            Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:XE", "COLLEGE", "ms");
            int ch = 0;
            Scanner sc = new Scanner(System.in);
            while (ch != 7) {
                System.out.println(
                        "\nMenu:\n1.Create Table\n2.Insert Data\n3.Update Values\n4.Delete data\n5.Drop Table\n6.Display Data\n7.Exit");
                ch = sc.nextInt();
                switch (ch) {
                    case 1:
                        createTable(con);
                        break;
                    case 2:
                        insertData(con);
                        break;
                    case 3:
                        updateTable(con);
                        break;
                    case 4:
                        deleteData(con);
                        break;
                    case 5:
                        dropTable(con);
                        break;
                    case 6:
                        display(con);
                        break;
                    default:
                        break;
                }
            }
            // createTable(con);
            // insertData(con);
            // dropTable(con);
            // updateTable(con);
            // deleteData(con);
            // display(con);
            sc.close();
            con.close();
        } catch (ClassNotFoundException | SQLException | NumberFormatException e) {
            e.printStackTrace();
        }
    }

    public static void createTable(Connection con) {
        try {
            Statement stmt = con.createStatement();
            stmt.execute(
                    "CREATE TABLE Employee(EId NUMBER(4) PRIMARY KEY,FirstName VARCHAR2(30),LastName VARCHAR2(30),DEPARTMENT VARCHAR2(30),SALARY NUMBER(10,2))");
            System.out.println("Table Employee created with columns Eid,Firstname,Lastname,Department,Salary");
            stmt.close();
        } catch (SQLException e) {
            if (e.getErrorCode() == 955)
                System.out.println("Table already exists..\n");
        }

    }

    public static void updateTable(Connection con) {
        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter id :");
            int id = sc.nextInt();
            sc.nextLine();
            System.out.println("Enter column name to update : ");
            String col = sc.nextLine();
            PreparedStatement stmt = con.prepareStatement("UPDATE Employee SET " + col + "=? where EID=?");

            stmt.setInt(2, id);
            System.out.println("Enter value to update : ");
            if (col.toLowerCase().equals("salary"))
                stmt.setDouble(1, sc.nextDouble());
            else
                stmt.setString(1, sc.nextLine());
            stmt.execute();
            System.out.println(stmt.getUpdateCount() + " values update");

            stmt.close();
        } catch (SQLException e) {
            e.printStackTrace();
            if (e.getErrorCode() == 942) {
                System.out.println("Table does not exist..\n");
            }
        }
    }

    public static void display(Connection con) {
        try {
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT * from EMPLOYEE order by EID");
            System.out.println("EmpId\tFirst\tLast\tDepartment\tSalary");
            while (rs.next()) {
                System.out.println(String.format("%d\t%s\t%s\t%s\t%f", rs.getInt(1), rs.getString(2), rs.getString(3),
                        rs.getString(4), rs.getDouble(5)));
            }

        } catch (SQLException e) {
            e.printStackTrace();
            if (e.getErrorCode() == 942) {
                System.out.println("Table does not exist..\n");
            }
        }
    }

    public static void insertData(Connection con) {
        try {
            PreparedStatement stmt = con.prepareStatement("INSERT INTO Employee values(?,?,?,?,?)");
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter employee id");
            // sc.useDelimiter("\\n");
            stmt.setInt(1, sc.nextInt());
            sc.nextLine();
            // sc.next();
            System.out.println("Enter first name");
            stmt.setString(2, sc.nextLine());
            System.out.println("Enter last name");
            stmt.setString(3, sc.nextLine());
            System.out.println("Enter department");
            stmt.setString(4, sc.nextLine());
            System.out.println("Enter salary");
            stmt.setDouble(5, sc.nextInt());
            stmt.execute();
            stmt.close();
        } catch (SQLException e) {
            if (e.getErrorCode() == 942) {
                System.out.println("Table does not exist..\n");
            }
        }
    }

    public static void deleteData(Connection con) {
        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter id :");
            int id = sc.nextInt();
            sc.nextLine();
            PreparedStatement stmt = con.prepareStatement("DELETE from Employee where EID=?");
            stmt.setInt(1, id);
            stmt.execute();
            System.out.println(stmt.getUpdateCount() + " records deleted");

            stmt.close();
        } catch (SQLException e) {
            e.printStackTrace();
            if (e.getErrorCode() == 942) {
                System.out.println("Table does not exist..\n");
            }
        }
    }

    public static void dropTable(Connection con) {
        try {
            Statement stmt = con.createStatement();
            stmt.execute("DROP TABLE Employee");
            System.out.println("Employee table dropped...\n");
            stmt.close();
        } catch (SQLException e) {
            if (e.getErrorCode() == 942) {
                System.out.println("Table does not exist..\n");
            }
        }
    }
}
