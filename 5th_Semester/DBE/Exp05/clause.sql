INSERT INTO DEPARTMENT
VALUES(1, 'CSE');
INSERT INTO BATCH(
    ID,
    "NAME",
    DEPTID
  )
VALUES
  (
    1,'Sy',1
  );

INSERT INTO STUDENT(
    PRN,
    FIRSTNAME,
    LASTNAME,
    DOB,
    BATCHID
  )
VALUES
  (
    '20UCS304',
    'M',
    'N',
    (TO_DATE('06-04-2001','dd-mm-yyyy')),
    1
  );
