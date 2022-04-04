create table student(snum number, sname varchar2(20),majorr varchar2(20), levell varchar2(20),age number)

create table Faculty(fid number, fname varchar2(20), deptid number)

create table Class(cname varchar2(20), room VARCHAR2(20), fid number)

create table Enrolled(snum number, cname varchar2(20))
