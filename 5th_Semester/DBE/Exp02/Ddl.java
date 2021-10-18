package Exp02;

import java.sql.*;

/**
 * Ddl
 */
public class Ddl {
    public static void main(String[] args) {
        try {
            Class.forName("oracle.jdbc.OracleDriver");
            Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:XE", "COLLEGE", "ms");
            String dept = "CREATE TABLE Department(Id NUMBER(4) PRIMARY KEY,Name VARCHAR2(30))";
            String classes = "CREATE TABLE Classes(Id NUMBER(4) PRIMARY KEY,Name VARCHAR2(30), DeptId NUMBER(4),CONSTRAINT fk_dept FOREIGN KEY (DeptId) REFERENCES DEPARTMENT (Id))";
            String student = "CREATE TABLE Student(PRN VARCHAR2(20) PRIMARY KEY,FIRSTNAME VARCHAR2(30),LASTNAME VARCHAR2(30),DOB Date,ClassId NUMBER(4),CONSTRAINT fk_class FOREIGN KEY (ClassId) REFERENCES Classes (Id))";

            String alterStud = "ALTER TABLE STUDENT ADD MARKS NUMBER(3,2)";
            String truncate = "TRUNCATE TABLE Student";
            String drop = "DROP TABLE Student";
            String rename = "RENAME Classes TO Batch";
            Statement st = con.createStatement();
            st.executeQuery(dept); // Department table created
            st.executeQuery(classes); // Classes table created
            st.executeQuery(student); // Student table created
            st.executeQuery(alterStud); // Marks column added to student
            st.executeQuery(truncate); // Student table truncated
            st.executeQuery(drop); // Student table dropped
            st.executeQuery(rename); // Classes table renamed to Batch
            st.close();
            con.close();
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
        }
    }

}