create table Test_Stage(Emp_Id int, Emp_Name nvarchar(50), Country nvarchar(20))

insert into Test_Stage values
	(1,'Meghanath','India'),
	(2,'Vaibhav','USA'),
	(3,'Pramod','USR');

select * from Test_Stage;

create table Test(Emp_Id int, Emp_Name nvarchar(50), Country nvarchar(20), Start_Date date, End_Date date);

select * from Test;


update Test_Stage set Country='China' where Emp_Id=2;

insert into Test_Stage values (4,'Vinayak','China');
