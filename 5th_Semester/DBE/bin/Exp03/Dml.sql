-- Create Employee

CREATE TABLE Employee
(
    EId NUMBER(4) PRIMARY KEY,
    FirstName VARCHAR2(30),
    LastName VARCHAR2(30),
    DEPARTMENT VARCHAR2(30),
    SALARY NUMBER(10,2)
)