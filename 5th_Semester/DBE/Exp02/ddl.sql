-- Create Department

CREATE TABLE Department 
(
  Id NUMBER(4) PRIMARY KEY,
  Name VARCHAR2(30)
);

-- Create Classes
CREATE TABLE Classes 
(
    Id NUMBER(4) PRIMARY KEY,
    Name VARCHAR2(30)
)



-- Create Student

CREATE TABLE Student
(
    PRN VARCHAR2(20) PRIMARY KEY,
    FIRSTNAME VARCHAR2(30),
    LASTNAME VARCHAR2(30),
    DOB Date,
    ClassId NUMBER(4),
    CONSTRAINT fk_class FOREIGN KEY (ClassId) REFERENCES Classes (Id)
)


-- Create Exam
CREATE TABLE Exam(
    Id NUMBER(4) PRIMARY KEY,
    Name VARCHAR2(30),
    ClassId NUMBER(4),
    CONSTRAINT fk_exam_class FOREIGN KEY (ClassId) REFERENCES Classes (Id)
)


-- CREATE Marks

CREATE TABLE Marks
(
    ExamId NUMBER(4),
    PRN VARCHAR2(20),
    Sub1 number(3,2),
    Sub2 number(3,2),
    Sub3 number(3,2),
    Sub4 number(3,2),
    Sub5 number(3,2),
    CONSTRAINT fk_exam FOREIGN KEY (ExamID) REFERENCES Exam(Id),
    CONSTRAINT fk_stud FOREIGN KEY (PRN) REFERENCES STUDENT (PRN)
)

-- ALTER STUDENT
ALTER TABLE STUDENT ADD MARKS NUMBER(3,2);

-- DROP TABLE DEPARTMENT;
-- DROP TABLE Classes ;
-- DROP TABLE Student;
-- DROP TABLE EXAM;
-- DROP TABLE marks;

-- CREATE TABLE Classes(Id NUMBER(4) PRIMARY KEY,Name VARCHAR2(30), DeptId NUMBER(4),CONSTRAINT fk_dept FOREIGN KEY (DeptId) REFERENCES DEPARTMENT (Id))